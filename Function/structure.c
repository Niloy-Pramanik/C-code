// struct Student {
//     std::string name;
//     std::string id;
//     float cgpa = 0.0f;
// };
// Student s1;
// s1.name = "Alice";
// s1.id = "1234";
// s1.cgpa = 3.5;

// Student s2;
// s2.name = "Bob";
// s2.id = "5678";
// s2.cgpa = 3.2;
struct Student {
    char name[50];
    char id[20];
    float cgpa;
};
struct Student s1 = {"Niloy", "0508", 3.5};
struct Student s2 = {"Bob", "0509", 3.2};

