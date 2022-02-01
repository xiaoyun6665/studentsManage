import std.core;
import Student;
import Manage;

int main() {
	smns::Student stu("ÕÅÈı", 12);
	std::vector<smns::Student> list;
	list.push_back(stu);
	smns::Manage man(list);
	smns::Student stu0 = man.getOneStudentByIndex(0);
	std::cout << stu0.getName() << std::endl;
	return 0;
}

