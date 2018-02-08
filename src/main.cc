
#include <iostream>
#include "Record.h"
#include <stdlib.h>
using namespace std;

extern "C" {
	int yyparse(void);   // defined in y.tab.c
}

extern struct AndList *final;

//int main () {
//
//	// try to parse the CNF
//	//cout << "Enter in your CNF: ";
//  	//if (yyparse() != 0) {
//		//cout << "Can't parse your CNF.\n";
//		//exit (1);
//	//}
//
//	// suck up the schema from the file
//	//Schema lineitem ("catalog", "lineitem");
//
//	// grow the CNF expression from the parse tree 
//	CNF myComparison;
//	Record literal;
//	//myComparison.GrowFromParseTree (final, &lineitem, literal);
//	
//	// print out the comparison to the screen
//	//myComparison.Print ();
//
//	// now open up the text file and start procesing it
//        FILE *tableFile = fopen ("C://lineitem.tbl", "r");
//
//        Record temp;
//        Schema mySchema ("catalog", "lineitem");
//		Page pageToAdd;
//
//	//char *bits = literal.GetBits ();
//	//cout << " numbytes in rec " << ((int *) bits)[0] << endl;
//	//literal.Print (&supplier);
//
//        // read in all of the records from the text file and see if they match
//	// the CNF expression that was typed in
//	int counter = 0;
//	ComparisonEngine comp;
//        while (temp.SuckNextRecord (&mySchema, tableFile) == 1) {
//		counter++;
//		if (counter % 10000 == 0) {
//			cerr << counter << "\n";
//		}
//
//		if (comp.Compare (&temp, &literal, &myComparison))
//                	temp.Print (&mySchema);
//
//		if (pageToAdd.Append(&temp) == 0)
//			break;
//		cout << "nof record:";
//
//        }
//
//		off_t offset = 1;
//		File newFile;
//		
//		newFile.Open(0, "foo.file");
//		newFile.AddPage(&pageToAdd, offset);
//		newFile.Close();
//		//retrive page from disk and display records
//		newFile.Open(1, "foo.file");
//		Page retrivedPage;
//		Record retrivedRec;
//		newFile.GetPage(&retrivedPage, offset);
//		while (retrivedPage.GetFirst(&retrivedRec)) {
//			retrivedRec.Print(&mySchema);
//		}
//
//}


