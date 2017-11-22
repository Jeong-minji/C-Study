#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class DocWriter
{
protected:
	string filename;
	string content;

public:
	DocWriter(string = "", string = "");
	void Write();
};

DocWriter::DocWriter(string f, string c)
	:filename(f), content(c)
{
}

void DocWriter::Write()
{
	ofstream of(filename);
	of << "# Content #" << endl;
	of << content << endl;
	of.close();
}

class HTMLWriter : public DocWriter						// 상속
{
private:
	int fontSize;
	string fontColor;

public:
	HTMLWriter(string, string, int, string);					// 선언
	void Write();

};

HTMLWriter::HTMLWriter(string filename, string content, int size, string color)
	:fontSize(size), fontColor(color), DocWriter(filename, content)								// Base 생성
{
}

void HTMLWriter::Write()
{
	// HTML 문서 저장
	ofstream of(filename);

	// 폰트 태그 저장
	of << "<html><head><title>Test</title></head></body>"
		"<font size =' " << fontSize << " ' color=' " << fontColor << " '>"
		//텍스트 저장
		<< content << "</font>"
		<< "</body></html>";
	of.close();
}

int main()
{
	HTMLWriter hw("C:\\DocWriter.html", "This is a test:HTML_Writer", 15, "blue");
	hw.Write();		// DocWriter::Write() 상속 받아서 사용

	DocWriter dw("C:\\docwriter.txt", "This is a test:DocWriter");
	dw.Write();

	DocWriter*pDW;
	pDW = &dw;
	pDW->Write();				// DocWriter::Write()
	pDW = &hw;				// upcasting
	pDW->Write();				// HTMLWriter::Write()			// <==== DocWriter::Write()

	return 0;
}