#include <iostream>
#include <vector>
#include <fstream>


class Student
{
	std::string m_first = "";
	std::string m_last  = "";
	int         m_id    = 0;
	float       m_avg   = 0;

public:
	Student(){}

	Student(const std::string& first, const std::string& last, const int id, const float avg)
		: m_first  (first)
		, m_last   (last)
		, m_id     (id)
		, m_avg    (avg)
	{
	}

	std::string getFirst() const
	{
		return m_first;
	}

	std::string getLast() const
	{
		return m_last;
	}

	int getID() const
	{
		return m_id;
	}

	float getAVG() const
	{
		return m_avg;
	}

	void print() const
	{
		std::cout << m_first << " " << m_last << " ";
		std::cout << m_id << " " << m_avg << std::endl;
	}

};

class Course
{
	std::string m_name = "";
	std::vector<Student> m_students;
public:
	
	Course(const std::string& name)
		: m_name(name)
	{
	}

	void addStudent(const Student& student)
	{
		m_students.push_back(student);
	}

	const std::vector<Student>& getStudents() const
	{
		return m_students;
	}

	void loadFromFile(const std::string filename)
	{
		std::ifstream fin(filename);
		std::string first;
		std::string last;
		int id;
		float avg;


		while(fin >> first)
		{
			fin >> last >> id >> avg;
			addStudent(Student(first, last, id, avg));
		}
	}

	void print() const
	{
		for (const auto& s : m_students)
		{
			s.print();
		}
	}
};

int main(int argc, char * argv[])
{
	Course c("C++ Fundamentals");
	c.loadFromFile("students.txt");
	c.print();

	return 0;
}
