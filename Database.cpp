int _lastId = 0;

class Database {
    public:
    Database() {

        tables = [];
    }


    void createTable(std::string tableName, columns?) {

    }

    void addRow(fromWhatTableDoIAddThisNewRow, ...columnDatas) {
        int rowId = ++_lastId;
    }

    void removeRow(fromWhatTableDoIDeleteTheRow, )

    Row[] getRows(searchData) {
        
    }
};

Database schoolDatabase();
Table employeesTable = schoolDatabase.createTable("employees", "name", "age", "jobPosition");

Table studentsTable = schoolDatabase.createTable("students", "name", "course", "tuition");

employeesTable.addRow({
    name: "Ahmed",
    age: "19",
    jobPosition: "Principal"
});

studentsTable.addRow({
    name : "Val",
    course : "Computer Science",
    tuition : "100000000"
});

// Ahmed is demoted so let me update his jobPosition

Row[] rows = employeesTable.getRows({
    firstName: "Ahmed"
})

employeesTable.updateRow();