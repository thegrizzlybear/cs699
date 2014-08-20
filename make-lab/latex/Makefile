

all:assignment2_1.svg assignment2_2.svg report.tex 
	inkscape -D -A arch.pdf assignment2_1.svg
	inkscape -D -A arch1.pdf assignment2_2.svg
	pdflatex report
	bibtex report
	pdflatex report
	pdflatex report


clean: 
	rm *.bbl *~ *.blg


