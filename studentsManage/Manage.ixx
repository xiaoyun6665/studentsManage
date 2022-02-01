export module Manage;

import std.core;
import Student;

namespace smns {
	export class Manage;
	class Manage{
	public:
		Manage();
		Manage(std::vector<smns::Student> list);
		const smns::Student& getOneStudentByIndex(int index);
		int getSize();
	private:
		std::vector<smns::Student> stuList;
	};
	Manage::Manage() {
	};

	Manage::Manage(std::vector<smns::Student> list) {
		stuList = list;
	};

	int Manage::getSize() {
		return stuList.size();
	}

	const smns::Student& Manage::getOneStudentByIndex(int index) {
		return stuList[index];
	}
}



