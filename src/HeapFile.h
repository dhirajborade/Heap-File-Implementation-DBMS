#ifndef HEAP_FILE_H
#define HEAP_FILE_H

#include "DBFile.h"
#include "GenericDBFileBaseClass.h"

class HeapFile : virtual public GenericDBFileBaseClass {
	
private:
	File * theFile;
	Page *curPage; //Record writes go into this page
	Record *newrec;		   //Page *read_page;  //This page is only for reading
	int curPageIdx;     //Current Page being read. 0 means no pages to read
						//bool dirty;       //If true, current page being read is dirty(Not yet written to disk). 
	fType type;
public:
	HeapFile();
	~HeapFile();

	int Close();
	void Add(Record& me);

	void MoveFirst();
	int GetNext(Record& fetchme, CNF& cnf, Record& literal);
	int GetNext(Record& fetchme);

	void GetFirstRecord(Record & fetchme);

	int Open(const char * f_path);

	int Create(const char * fpath, void * startup);


	void Load(Schema & myschema, char * loadpath);

};

#endif