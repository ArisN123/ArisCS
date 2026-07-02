

import os 
from pikepdf import Pdf


path_x = "C:/Users/aris123/Desktop/RoadToSWE/random files i work with/bgc_a4_c_1.pdf"

new_pdf = Pdf.new()
for n,page in enumerate(Pdf.open(path_x).pages):
    if n < 56:
        new_pdf.pages.append(page)


new_pdf.save(f'new_pdf.pdf')

