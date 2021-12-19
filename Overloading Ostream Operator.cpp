// Enter your code here.
ostream& operator<<(ostream& stream, Person &person){
    stream << "first_name=" << person.get_first_name() << ",last_name="        <<person.get_last_name();
    return stream;
};
