def get_data(prompt):
      return input(prompt)

def create_review_breakdown(name, country, dob, PEP_status):
    return f'''=== SANCTIONS SCREENING SYSTEM ===
name: {name}
country: {country}
dob: {dob}
PEP Status: {PEP_status}
Status: PENDING REVIEW'''
def sanction_review(name, watchlist):
    if name in watchlist:
        output = f"{name} - BLOCKED due to full name match"
    else:
        output = f"{name} - CLEAR"
    return output
def screen_customer(user_info,watchlist):
    for person in watchlist:
        if user_info['name'] == person['name'] and user_info['dob'] == person['dob']:
                return person

watchlist = watchlist = [
    {"name": "Ali Hassan",       "dob": "22-10-1980", "country": "IR", "reason": "OFAC SDN — proliferation financing"},
    {"name": "John Kim",         "dob": "05-03-1975", "country": "KP", "reason": "OFAC SDN"},
    {"name": "Sara Petrov",      "dob": "14-07-1988", "country": "RU", "reason": "EU sanctions"},
    {"name": "Omar Khalid",      "dob": "30-01-1971", "country": "SY", "reason": "OFAC SDN — human rights abuses"},
    {"name": "Rhivo Mars",       "dob": "19-09-1983", "country": "BY", "reason": "EU sanctions"},
    {"name": "Hassan Al-Farsi",  "dob": "08-06-1969", "country": "IR", "reason": "OFAC SDN — sanctions evasion"},
    {"name": "Natalia Vorova",   "dob": "23-11-1991", "country": "RU", "reason": "UK OFSI — oligarch asset freeze"},
    {"name": "Chen Wei",         "dob": "11-04-1978", "country": "CN", "reason": "OFAC SDN"},
]
user_info_db = [{'name':'Aris Niamonitakis', 'dob':'23-11-2001'},
            {'name':'Ali Hassan', 'dob':'22-10-1980'},
            {'name':'Katya Sad', 'dob':'19-09-1983'}]
final_result = 'Cleared'  
for user in user_info_db:
    screened_results = screen_customer(user,watchlist)
    print(screened_results)
    if screened_results:
        final_result = 'BLOCKED'
    print(f'{user['name']} is {final_result}')
    final_result = 'Cleared'