export module Student;
import std.core;

namespace smns {
	export class Student;
	class Student {
	public:
		Student(std::string name, int age) :name(name), age(age) {};
		Student(const smns::Student& stu);
		~Student();
		const std::string& getName();
		int getAge();
	private:
		std::string name;
		int age;
	};

	const std::string& Student::getName() {
		return name;
	}

	int Student::getAge() {
		return age;
	}

	Student::Student(const smns::Student& stu) {
		this->name = stu.name;
		this->age = stu.age;
	};


	Student::~Student()
	{
	}
}