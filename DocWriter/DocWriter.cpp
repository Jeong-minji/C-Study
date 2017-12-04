#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* �θ� Ŭ������ DocWriter ���� */
class DocWriter
{
protected:
	string filename;
	string content;

public:
	DocWriter(string = "", string = "");
	void Write();
};

DocWriter::DocWriter(string fileName, string content) 
	: filename(fileName), content(content)
{
	cout << "DocWriter�� ������" << endl;
}

void DocWriter::Write()
{
	ofstream of(filename);
	of << "# Content #" << endl;
	of << content << endl;
	of.close();
}


/* DocWriter�� ��ӹ��� HTMLWriter ���� */
class HTMLWriter : public DocWriter						// ���
{
private:
	int fontSize;
	string fontColor;

public:
	HTMLWriter(string, string, int, string);					// ����
	void Write();
};

HTMLWriter::HTMLWriter(string filename, string content, int size, string color)
	:fontSize(size), fontColor(color), DocWriter(filename, content)								// Base ����
{
	cout << "HTMLWriter�� ������" << endl;
}

void HTMLWriter::Write()
{
	// HTML ���� ����
	ofstream of(filename);

	// ��Ʈ �±� ����
	of << "<html><head><title>Test</title></head></body>"
		"<font size =' " << fontSize << " ' color=' " << fontColor << " '>"
		//�ؽ�Ʈ ����
		<< content << "</font>"
		<< "</body></html>";
	of.close();
}

int main()
{
	HTMLWriter hw("C:\\DocWriter.html", "This is a test:HTML_Writer", 15, "blue");
	hw.Write();		// DocWriter::Write() ��� �޾Ƽ� ���

	DocWriter dw("C:\\docwriter.txt", "This is a test:DocWriter");
	dw.Write();

	DocWriter*pDW;
	pDW = &dw;
	pDW->Write();				// DocWriter::Write()
	pDW = &hw;				// upcasting
	pDW->Write();				// HTMLWriter::Write()			// <==== DocWriter::Write()

	return 0;
}