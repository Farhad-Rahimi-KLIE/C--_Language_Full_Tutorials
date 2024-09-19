<h1>C++ File I/O [Reading and Writing] to a File</h1>

<!-- * 3 useful Classes -->
1 - fstreambase
2 - ifstream -> Derived from 1
3 - ofstream -> Derived from 1

<!-- * Read Operation -->
ifstream in("this.txt");
string st;
in>>st; // just like cin

<!-- Write Operation -->

1 - ofstream out("this.txt");
string st = "Harry";
out<<st; //write to a file this.txt;