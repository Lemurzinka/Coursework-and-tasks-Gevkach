#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <regex>
#include <limits>
#include <cctype>
using namespace std;



bool isValidDate(const std::string& date) {
    std::regex pattern("\\d{4}-\\d{2}-\\d{2}");
    
    if (!std::regex_match(date, pattern))
        return false;
    
    std::string::size_type delimiterPos = date.find('-');
    int year = std::stoi(date.substr(0, delimiterPos));
    std::string::size_type nextDelimiterPos = date.find('-', delimiterPos + 1);
    int month = std::stoi(date.substr(delimiterPos + 1, nextDelimiterPos - delimiterPos - 1));
    int day = std::stoi(date.substr(nextDelimiterPos + 1));
    
    if (year < 0 || month < 1 || month > 12 || day < 1)
        return false;
    
    int maxDays = 31;
    
    if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDays = 30;
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            maxDays = 29;
        else
            maxDays = 28;
    }
    
    if (day > maxDays)
        return false;
    
    return true;
}
string names_and_positions_Factory_Planes[15][2] = {
    {"", ""},
    {"John Smith", "Engineer"},
    {"Emma Liu", "Engineer"},
    {"Nick Xu", "Technician"},
    {"Ivy Liu", "Technician"},
    {"Patrick Zhang", "Technician"},
    {"Jiri Novak", "Collector"},
    {"Petr Dvorak", "Collector"},
    {"Katerina Krejcova", "Collector"},
    {"Veronika Barta", "Collector"},
    {"Amandine Leroy", "Turner"},
    {"Emilie Laurent", "Turner"},
    {"Martin Lepik", "Locksmith"},
    {"Priit Raudsepp", "Locksmith"},
    {"Fatma Mohamed", "Welder"}
};

string names_and_positions_Factory_Gliders[12][2] = {
    {"", ""},
    {"Karen Brown", "Engineer"},
    {"Grace Lee", "Technician"},
    {"Henry Chen", "Technician"},
    {"Oleksandr Bondarenko", "Technologist"},
    {"Marketa Prikrylova", "Collector"},
    {"Karel Ruzicka", "Collector"},
    {"Antoine Dubois", "Turner"},
    {"Alexandre Mercier", "Turner"},
    {"Kaisa Kaasik", "Locksmith"},
    {"Antra Kalnina", "Welder"},
    {"Daina Kadike", "Welder"},
};
string names_and_positions_Factory_Helicopters[12][2] = {
    {"", ""}, 
    {"Tom Davis", "Engineer"},
    {"Sophie Zhang", "Engineer"},
    {"Tina Liu", "Technician"},
    {"Kateryna Ivanova", "Technologist"},
    {"Ivan Petrov", "Technologist"},
    {"Hana Kolarova", "Collector"},
    {"Martin Blaha", "Collector"},
    {"Marie Leclerc", "Turner"},
    {"Katriin Lutsar", "Locksmith"},
    {"Liis Allik", "Locksmith"},
    {"Raimonds Veveris", "Welder"},
};
string names_and_positions_Factory_Hang_Gliders[6][2] = {
{"", ""},
{"Alice Johnson", "Engineer"},
{"Jitka Buresova", "Collector"},
{"Mari-Liis Rebane", "Locksmith"},
{"Toomas Tamm", "Locksmith"},
{"Laima Jansone", "Welder"},
};

string names_and_positions_Factory_Rockets[17][2] = {
    {"", ""},
    {"Veron Barta", "Collector"},
    {"Tomas Vlcek", "Collector"},
    {"Lukas Kolar", "Collector"},
    {"Marie Horakova", "Collector"},
    {"Bob Wilson", "Engineer"},
    {"Andriy Tkachenko", "Technologist"},
    {"Samuel Lee", "Technician"},
    {"Amy Johnson", "Technician"},
    {"Rachel Wang", "Technician"},
    {"Camille Durand", "Turner"},
    {"Marie Leclerc", "Turner"},
    {"Jaanika Veskis", "Locksmith"},
    {"Raul Valt", "Locksmith"},
    {"Ieva Ozola", "Welder"},
    {"Laima Jansone", "Welder"},
    {"Daina Kadike", "Welder"},
};

struct Employee {
    string name_and_surname;
    string position;
};

struct Product {
    string name;
    string factory;
    string area;
    vector <string> composition_of_area_brigades;
    int amount_per_time_period[4];
    string boss_of_the_area;
    vector <string> masters_of_the_area;
    string date_for_laboratories;
    vector <string> testers_per_time_2020;
     vector <string> testers_per_time_2021;
     vector <string> testers_per_time_2022;
     vector <string> testers_per_time_2023;
     vector <string> equipment_per_time_2020;
     vector <string> equipment_per_time_2021;
     vector <string> equipment_per_time_2022;
     vector <string> equipment_per_time_2023;
    
    Product(string n, string f, string a, vector<string> c, int a_2020, int a_2021, int a_2022, int a_2023, string b, vector<string> m, string d, vector <string> t_2020, vector <string> t_2021, vector <string> t_2022, vector <string> t_2023, vector <string> e_2020, vector <string> e_2021, vector <string> e_2022, vector <string> e_2023 ) : name(n), factory(f), area(a), composition_of_area_brigades(c), boss_of_the_area(b), masters_of_the_area(m), date_for_laboratories(d), testers_per_time_2020(t_2020), testers_per_time_2021(t_2021), testers_per_time_2022(t_2022), testers_per_time_2023(t_2023), equipment_per_time_2020(e_2020), equipment_per_time_2021(e_2021), equipment_per_time_2022(e_2022), equipment_per_time_2023(e_2023)  {
        amount_per_time_period[0] = a_2020;
        amount_per_time_period[1] = a_2021;
        amount_per_time_period[2] = a_2022;
        amount_per_time_period[3] = a_2023;
    }
    int getPartsProduced(int year) const {
        if (year >= 2020 && year <= 2023) {
            return amount_per_time_period[year-2020];
        }
        else {
            return 0;
        }
    }
};
struct Engineer {
   string  name_and_surname;
    string specialization;
    string education_level;
    bool is_manager;
    string programming_language;
};
struct Technician {
    string  name_and_surname;
    string equipment_type;
    bool certification;
    string job_title;
    bool is_supervisor;
};

struct Technologist {
    string name_and_surname;
    string industry_experience;
    string highest_degree_earned;
    bool has_license;
    string software_proficiency;
};

struct Collector {
    string name_and_surname;
bool graduated_from_the_university;
string native_language;
bool is_able_to_operate_specialized_equipment;
int number_of_certifications;
};

struct Turner {
    string name_and_surname;
string field_of_study;
string originally_from_the_country;
bool is_able_to_use_CNC_machines;
int number_of_materials_processed;
};

struct Locksmith {
    string name_and_surname;
bool completed_certain_courses;
bool age_is_more_than_45;
bool is_able_to_use_lock_picking_tools;
int number_of_security_systems_installed;
};

struct Welder {
string name_and_surname;
bool age_is_more_than_35;
bool has_the_award_of_the_best_employee;
bool is_able_to_use_specialized_welding_techniques;
int number_of_materials_welded;
};





class Factory {
public:
    string name;
    string name_of_laboratory; 
    vector<string> works;
    vector<string> masters_of_the_factory;
    vector<Product> products;
};

class Category {
public:
    string name;
    vector<Factory> factories;
};
int main() {
string answer_category;
Category categories[] = {
    {"Planes", {
        {"Factory Planes", "Aircraft testing ground", {"Fuselage and wing design", "Development of a flight control system", "Creating an engine", "Manufacture of parts and assembly of the plane", "Tests on the ground and in the air", "Plane quality and safety control"}, {"Nick Xu", "Jiri Novak"},  {Product("Civil", "Factory Planes", "AftAoCP", {"John Smith", "Emma Liu", "Nick Xu", "Ivy Liu",}, 20, 25, 22, 15, "John Smith", {"Emma Liu", "Jiri Novak"}, "2020-02-10",  {"Olivia Powell", "Zachary Henderson", "Ashley Hayes", "Lauren Bryant"}, {"Olivia Powell", "Zachary Henderson", "Emily Johnson", "David Smith"}, {"Olivia Powell", "Jennifer Brown", "Michael Wilson"}, {"Jennifer Brown", "Michael Wilson", "Sarah Taylor"}, {"Load sensors ver.1", "Deformation sensors ver.1", "Accelerometers ver.1", "Pressure sensors ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1",  "Temperature sensors ver.1"}, {"Load sensors ver.1","Deformation sensors ver.2", "Accelerometers ver.1", "Pressure sensors ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1", "Temperature sensors ver.2"}, {"Load sensors ver.2","Deformation sensors ver.3", "Accelerometers ver.1", "Pressure sensors ver.2", "Gyroscopes ver.2", "Parametric recorders ver.1", "Temperature sensors ver.2"}, {"Load sensors ver.1","Deformation sensors ver.2", "Accelerometers ver.1", "Pressure sensors ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1", "Temperature sensors ver.3"}),  Product("Transport", "Factory Planes", "AftAoTP", {"Patrick Zhang", "Jiri Novak", "Petr Dvorak", "Katerina Krejcova", "Veronika Barta"}, 23, 14, 10, 5, "Petr Dvorak" , {"Emma Liu", "Jiri Novak"}, "2021-01-06",  {"Rebecca Wilson", "Andrew Martin", "Laura Clark"}, {"Rebecca Wilson", "Andrew Martin", "Stephanie Moore"}, {"Andrew Martin", "Stephanie Mercier"}, {"Joshua Bennet", "Samantha Cooper"}, {"Load sensors ver.1", "Stretch sensors ver.1", "Deformation sensors ver.1", "Pressure sensors ver.1", "Accelerometers ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.1", "Fuel monitoring systems ver.1", "Flight data recording systems ver.1"}, {"Load sensors ver.1", "Stretch sensors ver.2", "Deformation sensors ver.1", "Pressure sensors ver.1", "Accelerometers ver.2", "Gyroscopes ver.1", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.1", "Fuel monitoring systems ver.1", "Flight data recording systems ver.2"}, {"Load sensors ver.1", "Stretch sensors ver.2", "Deformation sensors ver.1", "Pressure sensors ver.1", "Accelerometers ver.2", "Gyroscopes ver.2", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.1", "Fuel monitoring systems ver.2", "Flight data recording systems ver.3" }, {"Load sensors ver.3", "Stretch sensors ver.2", "Deformation sensors ver.1", "Pressure sensors ver.2", "Accelerometers ver.2", "Gyroscopes ver.2", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.2", "Fuel monitoring systems ver.2", "Flight data recording systems ver.3" }  ),  Product("Military", "Factory Planes", "AftAoMP", {"Amandine Leroy", "Emilie Laurent", "Martin Lepik", "Priit Raudsepp", "Fatma Mohamed"}, 3, 5, 15, 28, "Fatma Mohamed", {"Emilie Laurent", "Priit Raudsepp"}, "2021-05-13", {"Olivia White", "Daniel Lee", "Victoria Turner", "Amanda Scott"}, {"Olivia White", "Daniel Lee", "Victoria Turner", "Amanda Scott"}, {"Ryan Phillips", "Nycole Edwards"}, {"Daniel Lee", "Victoria Turner", "Amanda Scott"}, {"Dynamic pressure settings ver.1", "Test chambers ver.1", "Rocket suspensions ver.1", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.1", "Systems for testing autonomous functions ver.1", "Test stands of electronic communication ver.1", "Radar test systems ver.1"}, {"Dynamic pressure settings ver.1", "Test chambers ver.1", "Rocket suspensions ver.1", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.2", "Systems for testing autonomous functions ver.2", "Test stands of electronic communication ver.2", "Radar test systems ver.1"},  {"Dynamic pressure settings ver.1", "Test chambers ver.1", "Rocket suspensions ver.2", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.3", "Systems for testing autonomous functions ver.2", "Test stands of electronic communication ver.2", "Radar test systems ver.1"},  {"Dynamic pressure settings ver.1", "Test chambers ver.2", "Rocket suspensions ver.2", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.3", "Systems for testing autonomous functions ver.3", "Test stands of electronic communication ver.2", "Radar test systems ver.2"} )},  //Area for the Assembly of Civil/Transport/Military Planes
    },
}},
    {"Gliders", {
        {"Factory Gliders", "Gliders testing ground", {"Wing design", "Development of a flight control system", "Manufacture of parts and assembly of the glider", "Tests on the ground and in the air", "Glider quality and safety control"}, {"Antra Kalnina", "Karen Brown"}, {Product("Gliders", "Factory Gliders", "AftAoG", {"Karen Brown", "Grace Lee", "Henry Chen", "Oleksandr Bondarenko", "Marketa Prikrylova", "Karel Ruzicka", "Antoine Dubois", "Alexandre Mercier", "Kaisa Kaasik", "Antra Kalnina", "Daina Kadike"},  5, 5, 3, 1, "Oleksandr Bondarenko", {"Kaisa Kaasik", "Alexandre Mercier"}, "2022-09-13",  {"Moriss Jacob", "Steward Hanna"}, {"Moriss Jacob", "Steward Hanna"}, {"Moriss Jacob", "Steward Hanna"}, {"Kevin Michael", "Steward Hanna"}, {"Strength measuring devices ver.1", "Aerodynamic sensors ver.1", "Wing length and position measurement systems ver.1", "Parametric recorders ver.1", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.1"}, {"Strength measuring devices ver.2", "Aerodynamic sensors ver.1", "Wing length and position measurement systems ver.1", "Parametric recorders ver.2", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.1"}, {"Strength measuring devices ver.3", "Aerodynamic sensors ver.2", "Wing length and position measurement systems ver.1", "Parametric recorders ver.3", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.2"}, {"Strength measuring devices ver.3", "Aerodynamic sensors ver.2", "Wing length and position measurement systems ver.1", "Parametric recorders ver.3", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.3"})},
            
        },
    }},
            {"Helicopters", {
        {"Factory Helicopters", "Helicopters testing ground", {"Fuselage and wing design", "Development of a flight control system", "Creating a rotor", "Manufacture of parts and assembly of the helicopter", "Tests on the ground and in the air", "Helicopter quality and safety control"}, {"Sophie Zhang", "Tom Davis"},  {Product("Helicopters", "Factory Helicopters", "AftAoH", {"Tom Davis", "Sophie Zhang", "Tina Liu", "Kateryna Ivanova", "Ivan Petrov", "Hana Kolarova", "Martin Blaha", "Marie Leclerc", "Katriin Lutsar", "Liis Allik", "Raimonds Veveris"}, 10, 12, 8, 20, "Hana Kolarova", {"Martin Blaha", "Liis Allik"}, "2021-03-23",  {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Altimeter ver.1" "Airspeed indicator ver.1" "Turn and bank indicator ver.1", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.1"}, {"Altimeter ver.1" "Airspeed indicator ver.1" "Turn and bank indicator ver.2", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.2"}, {"Altimeter ver.2" "Airspeed indicator ver.1" "Turn and bank indicator ver.2", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.2"}, {"Altimeter ver.2" "Airspeed indicator ver.1" "Turn and bank indicator ver.2", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.2"} )},
    
        },
        }}, 
            {"Hang gliders", {
        {"Factory Hang gliders", "Hang gliders testing ground", {"Wing design", "Development of a flight control system", "Manufacture of parts and assembly of the hang glider", "Tests on the ground and in the air", "Hang glider quality and safety control"}, {"Toomas Tamm", "Jitka Buresova"},  {Product("Hang gliders", "Factory Hang gliders", "AftAoHG", {"Alice Johnson", "Jitka Buresova", "Mari-Liis Rebane", "Toomas Tamm", "Laima Jansone"}, 1, 2, 6, 4, "Toomas Tamm", {"Emma Liu", "Jiri Novak"}, "2020-01-23" ,  {"Allison Cook", "Patrick Mirphy"}, {"Megan Ross", "Patrick Mirphy"}, {"Allison Cook", "Megan Ross"}, {"Allison Cook", "Patrick Mirphy", "Megan Ross"},  {"Variometer ver.1", "Altimeter ver.1"}, {"Variometer ver.1", "Altimeter ver.1"}, {"Variometer ver.1", "Altimeter ver.2"}, {"Variometer ver.1", "Altimeter ver.3"}     ) },
    
            },
            }},
                {"Rockets", {
        {"Factory Rockets", "Rockets testing ground", {"Hull and engine design", "Development of a flight control system", "Manufacture of parts and assembly of the rocket", "Tests on the ground and in the air", "Rocket quality and safety control"}, {"Camille Durand", "Bob Wilson"},  {Product("Artillery", "Factory Rockets", "AftAoAR", {"Veron Barta", "Tomas Vlcek", "Lukas Kolar", "Marie Horakova", "Bob Wilson", "Andriy Tkachenko"}, 70, 40, 200, 300, "Andriy Tkachenko", {"Marie Horakova", "Tomas Vlcek"}, "2020-04-12" ,  {"Eric Powell", "Mellisa Jeniks", "Jennifer Heyes", "Bryan Brant", "Emma Colse"}, {"Jennifer Heyes", "Bryan Brant", "Emma Colse"}, {"Jennifer Heyes", "Bryan Brant", "Emma Colse"}, {"Jennifer Heyes", "Bryan Brant", "Jason Fisher"}, {"Ignition test stands ver.1", "Telemetry systems ver.1", "Measurement and registration systems ver.1", "Inertial navigation systems ver.1", "Remote control systems ver.1", "Communication test stands ver.1"}, {"Ignition test stands ver.2", "Telemetry systems ver.1", "Measurement and registration systems ver.1", "Inertial navigation systems ver.1", "Remote control systems ver.2", "Communication test stands ver.1"}, {"Ignition test stands ver.2", "Telemetry systems ver.2", "Measurement and registration systems ver.1", "Inertial navigation systems ver.1", "Remote control systems ver.2", "Communication test stands ver.1"}, {"Ignition test stands ver.2", "Telemetry systems ver.2", "Measurement and registration systems ver.2", "Inertial navigation systems ver.1", "Remote control systems ver.2", "Communication test stands ver.1"}    ), Product("Naval", "Factory Rockets", "AftAoNR", {"Samuel Lee", "Amy Johnson", "Rachel Wang", "Camille Durand", "Marie Leclerc"}, 100, 120, 90, 300, "Rachel Wang", {"Amy Johnson", "Samuel Lee"}, "2022-05-10" ,  {"Ian Richardson", "Michelle Harrison", "Samuel Gray"}, {"Ian Richardson", "Michelle Harrison", "Samuel Gray", "Rachel Adams"}, {"Ina Richardson", "Michelle Harrison", "Alexandra Sillivan"}, {"Ina Richardson", "Michelle Harrison", "Alexandra Sillivan"},  {"Launch stations ver.1", "Telemetry systems ver.1", "Navigation and orientation sensors ver.1", "Remote control systems ver.1", "Radar systems ver.1", "Communication test systems ver.1"}, {"Launch stations ver.1", "Telemetry systems ver.2", "Navigation and orientation sensors ver.2", "Remote control systems ver.1", "Radar systems ver.1", "Communication test systems ver.1"}, {"Launch stations ver.1", "Telemetry systems ver.2", "Navigation and orientation sensors ver.2", "Remote control systems ver.1", "Radar systems ver.1", "Communication test systems ver.1"},  {"Launch stations ver.1", "Telemetry systems ver.2", "Navigation and orientation sensors ver.3", "Remote control systems ver.2", "Radar systems ver.1", "Communication test systems ver.1"} ), Product("Aviation", "Factory Rockets", "AftAoAvR", {"Jaanika Veskis", "Raul Valt", "Ieva Ozola", "Laima Jansone", "Daina Kadike"}, 40, 50, 90, 150, "Daina Kadike", {"Ieva Ozola", "Jaanika Veskis"}, "2020-04-12" ,  {"Danniel Murray", "Amy Parker", "Jeremy Green"}, {"Danniel Murray", "Amy Parker", "Jeremy Green"}, {"Danniel Murray", "Amy Parker", "Jeremy Green", "Jastyn Perry"}, {"Jastyn Perry", "Katherine Jackson", "Jessica Beiley"} , {"Launch systems ver.1", "Navigation and orientation systems ver.1", "Sensors and measurement systems ver.1", "Data transmission and telemetry systems ver.1" , "Remote control systems ver.1", "Test stands and installations ver. 1"}, {"Launch systems ver.1", "Navigation and orientation systems ver.1", "Sensors and measurement systems ver.2", "Data transmission and telemetry systems ver.2" , "Remote control systems ver.1", "Test stands and installations ver. 1"},  {"Launch systems ver.1", "Navigation and orientation systems ver.2", "Sensors and measurement systems ver.3", "Data transmission and telemetry systems ver.2" , "Remote control systems ver.1", "Test stands and installations ver. 1"},  {"Launch systems ver.1", "Navigation and orientation systems ver.2", "Sensors and measurement systems ver.3", "Data transmission and telemetry systems ver.3" , "Remote control systems ver.1", "Test stands and installations ver.2"} )},
                },
    }}
    
    
    
    
};





Engineer engineers[10] = {
    {"John Smith", "Mechanical Engineering", "Master's Degree", true, "Java"},
    {"Alice Johnson", "Electrical Engineering", "Bachelor's Degree", false, "C++"},
    {"Bob Wilson", "Civil Engineering", "Bachelor's Degree", false, "Python"},
    {"Karen Brown", "Chemical Engineering", "PhD", true, "MATLAB"},
    {"Tom Davis", "Software Engineering", "Master's Degree", true, "JavaScript"},
    {"Sara Lee", "Aerospace Engineering", "Bachelor's Degree", false, "Python"},
    {"Mike Chen", "Industrial Engineering", "Master's Degree", true, "R"},
    {"Emma Liu", "Materials Engineering", "PhD", false, "Python"},
    {"Kevin Wang", "Environmental Engineering", "Bachelor's Degree", false, "Python"},
    {"Sophie Zhang", "Biomedical Engineering", "Master's Degree", true, "MATLAB"}
};

Technician technicians[20] = {{"Jack Smith", "Laboratory equipment", true, "Lab technician", false},
{"Amy Johnson", "Electronics equipment", true, "Electronics technician", true},
 {"David Wilson", "Automotive equipment", false, "Automotive technician", false},
 {"Emily Brown", "Medical equipment", true, "Medical equipment technician", true},
 {"Frank Davis", "Industrial equipment", false, "Industrial equipment technician", false},
 {"Grace Lee", "Telecommunications equipment", true, "Telecommunications technician", true},
 {"Henry Chen", "Laboratory equipment", false, "Lab technician", false},
 {"Ivy Liu", "Electronics equipment", true, "Electronics technician", true},
 {"John Wang", "Medical equipment", false, "Medical equipment technician", false},
 {"Kate Zhang", "Automotive equipment", true, "Automotive technician", true},
 {"Lucas Chen", "Industrial equipment", false, "Industrial equipment technician", false},
 {"Mia Li", "Telecommunications equipment", true, "Telecommunications technician", true},
 {"Nick Xu", "Laboratory equipment", true, "Lab technician", false},
 {"Olivia Chen", "Electronics equipment", true, "Electronics technician", true},
 {"Patrick Zhang", "Automotive equipment", false, "Automotive technician", false},
 {"Rachel Wang", "Medical equipment", true, "Medical equipment technician", true},
 {"Samuel Lee", "Industrial equipment", false, "Industrial equipment technician", false},
 {"Tina Liu", "Telecommunications equipment", true, "Telecommunications technician", true},
 {"Victor Chen", "Laboratory equipment", false, "Lab technician", false},
 {"Wendy Wang", "Electronics equipment", true, "Electronics technician", true} 
};

Technologist technologists[5] = {{"Ivan Petrov", "Chemical Industry", "Master's Degree", true, "MATLAB"},
 {"Andriy Tkachenko", "Automotive Industry", "Bachelor's Degree", true, "C++"},
    {"Maria Kovalenko", "IT Industry", "Bachelor's Degree", false, "Python"},
    {"Oleksandr Bondarenko", "Pharmaceutical Industry", "Master's Degree", true, "R"},
    {"Kateryna Ivanova", "Construction Industry", "Bachelor's Degree", false, "Java"}
};

Collector collectors[25] = {
{"Jan Novotny", true, "Czech", true, 2},
{"Marie Horakova", true, "Czech", false, 0},
{"Jiri Novak", false, "Czech", false, 1},
{"Lenka Prochazkova", true, "Czech", true, 3},
{"Petr Dvorak", true, "English", true, 2},
{"Martina Mareckova", true, "Czech", false, 0},
{"Tomas Vlcek", true, "Czech", true, 1},
{"Alena Svobodova", true, "Czech", false, 0},
{"Lukas Kolar", true, "Czech", true, 2},
{"Tereza Novakova", true, "Czech", true, 1},
{"Pavel Konecny", true, "Czech", true, 3},
{"Hana Kolarova", true, "English", true, 1},
{"Jakub Horak", true, "Czech", true, 2},
{"Jana Vojtova", true, "Czech", false, 0},
{"Josef Pospisil", true, "Czech", false, 1},
{"Veronika Barta", false, "Czech", false, 0},
{"Karel Ruzicka", false, "English", true, 1},
{"Eva Stepanova", true, "Czech", true, 2},
{"Marek Novacek", true, "Czech", true, 4},
{"Jitka Buresova", true, "Czech", false, 1},
{"David Havel", true, "Czech", true, 3},
{"Marketa Prikrylova", true, "Czech", true, 2},
{"Martin Blaha", true, "Czech", false, 1},
{"Katerina Krejcova", true, "English", true, 2},
{"Ondrej Vacek", false, "Czech", false, 0}
};
Turner turners[15] = {
{"Pierre Dupont", "Mechanical Engineering", "United States", true, 1000},
{"Celine Martin", "Industrial Engineering", "Canada", false, 500},
{"Antoine Dubois", "Metallurgical Engineering", "United Kingdom", true, 800},
{"Emilie Laurent", "Materials Science", "Australia", true, 1200},
{"Lucas Moreau", "Mechanical Engineering", "United States", false, 600},
{"Marie Leclerc", "Mechatronics", "South Korea", true, 900},
{"Nicolas Rousseau", "Mechanical Engineering", "China", true, 1500},
{"Julie Bertrand", "Mechanical Engineering", "China", false, 400},
{"Philippe Gautier", "Mechanical Engineering", "China", true, 1100},
{"Amandine Leroy", "Mechanical Engineering", "China", false, 300},
{"Jeanne Dubois", "Mechanical Engineering", "Czech Republic", true, 1300},
{"Alexandre Mercier", "Mechanical Engineering", "Czech Republic", false, 700},
{"Mathieu Laurent", "Mechanical Engineering", "Czech Republic", true, 1400},
{"Olivier Girard", "Mechanical Engineering", "Czech Republic", true, 900},
{"Camille Durand", "Mechanical Engineering", "Czech Republic", false, 500}
};
Locksmith locksmiths[15] = {
{"Toomas Tamm", true, false, true, 90},
{"Mari-Liis Rebane", false, false, false, 50},
{"Jaanika Veskis", false, false, true, 80},
{"Tanel Kangurt", false, false, false, 120},
{"Kaisa Kaasik", false, true, false, 60},
{"Martin Lepik", true, false, true, 90},
{"Kristjan Kallas", true, false, true, 150},
{"Epp Mihkelson", true, false, false, 40},
{"Peeter Laasik", false, true, true, 110},
{"Katriin Lutsar", false, true, true, 30},
{"Raul Valt", false, true, true, 130},
{"Liis Allik", true, true, false, 30},
{"Taavi Paas", true, false, true, 20},
{"Kadri Jaatma", true, false, false, 25},
{"Priit Raudsepp", true, false, true, 32}
};
  
Welder welders[20] = {
    {"Andris Berzins", true, false, true, 100},
    {"Ieva Ozola", false, true, false, 50},
    {"Juris Pētersons", true, true, true, 500},
    {"Liga Ziberga", true, false, true, 200},
    {"Janis Vilks", false, true, false, 75},
    {"Maija Liepa", true, true, true, 1000},
    {"Kaspars Abolins", true, false, true, 150},
    {"Inese Briede", false, true, false, 25},
    {"Raimonds Veveris", true, true, true, 800},
    {"Anda Dzerve", true, false, true, 400},
    {"Gints Berzs", false, true, false, 50},
    {"Elina Bluma", true, true, true, 900},
    {"Uldis Grinbergs", true, false, true, 300},
    {"Antra Kalnina", false, true, false, 75},
    {"Artis Zvirgzdins", true, true, true, 1200},
    {"Edgars Strautmanis", true, false, true, 250},
    {"Laima Jansone", false, true, false, 100},
    {"Jazeps Ozols", true, true, true, 700},
    {"Daina Kadike", true, false, true, 150},
    {"Fatma Mohamed", false, true, false, 50}
};
    Employee employees_in_Factory_planes[15];
    for (int i = 1; i <= 14; i++) {
        employees_in_Factory_planes[i].name_and_surname = names_and_positions_Factory_Planes[i][0];
        employees_in_Factory_planes[i].position = names_and_positions_Factory_Planes[i][1];
    }

    Employee employees_in_Factory_gliders[12];
    for (int i = 1; i <= 11; i++) {
        employees_in_Factory_gliders[i].name_and_surname = names_and_positions_Factory_Gliders[i][0];
        employees_in_Factory_gliders[i].position = names_and_positions_Factory_Gliders[i][1];
    }

    Employee employees_in_Factory_helicopters[12];
    for (int i = 1; i <= 11; i++) {
        employees_in_Factory_helicopters[i].name_and_surname = names_and_positions_Factory_Helicopters[i][0];
        employees_in_Factory_helicopters[i].position = names_and_positions_Factory_Helicopters[i][1];
    }


    Employee employees_in_Factory_hang_gliders[6];
    for (int i = 1; i <= 5; i++) {
        employees_in_Factory_hang_gliders[i].name_and_surname = names_and_positions_Factory_Hang_Gliders[i][0];
        employees_in_Factory_hang_gliders[i].position = names_and_positions_Factory_Hang_Gliders[i][1];
    }
    Employee employees_in_Factory_rockets[17];
    for (int i = 1; i <= 16; i++) {
        employees_in_Factory_rockets[i].name_and_surname = names_and_positions_Factory_Rockets[i][0];
        employees_in_Factory_rockets[i].position = names_and_positions_Factory_Rockets[i][1];
    }





while (true) {
    
cout << "Choose an option (1-15) or q to quit:" << endl
     << "1. View list of products by category and period for all environments" << endl
     << "2. View list of products by category and period for a specific factory" << endl
     << "3. View list of products by category and period for a specific area" << endl
     << "4. Get personnel data for the factory or enterprise by specified categories" << endl
     << "5. Get the number and list of plots for a specified factory or enterprise" << endl
     << "6. Get list of works undergone by a specified product" << endl
     << "7. Get the composition of teams for a specified area or factory" << endl
     << "8. Get list of masters for a specified area or factory" << endl
     << "9. Get list of products of a specific category currently being assembled in a specified area, factory, or enterprise" << endl
     << "10. Get the composition of teams participating in the assembly of a specified product" << endl
     << "11. Get list of participating testing laboratories for a specific product" << endl
     << "12. Get list of products tested in a specified laboratory within a certain period" << endl
     << "13. Get list of testers participating in trials of a specified product in a specific laboratory within a certain period" << endl
     << "14. Get composition of equipment used in testing a specified product in a specific laboratory within a certain period" << endl
     << "15. Get the number and list of products by category currently being assembled in a specified workshop, site, or enterprise" << endl;
    getline(cin, answer_category);
    if (answer_category == "1") {
        cout << "Do you want to see the products by any category? (yes/no) ";
        string question_category_or_skip;
        getline(cin, question_category_or_skip);
       while (question_category_or_skip != "yes" && question_category_or_skip != "no" && question_category_or_skip != "q") {
    cout << "Invalid input. Please enter 'yes', 'no', or 'q': ";
    getline(cin, question_category_or_skip);
}

            if (question_category_or_skip == "yes") {
                cout << "Do you want to know the number of parts produced for each product in any year? (yes/no): " << endl;
                string quesion_in_category_or_skip;
                getline (cin, quesion_in_category_or_skip);
                if (quesion_in_category_or_skip == "yes"){
int year;
int category_index;

cout << "Enter the number of a category to view its products: ";
cin >> category_index;


if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input for category index. Please enter a valid integer next time" << endl;
    return 1; 
}


cout << "Enter a year to view the number of parts produced for each product: ";
cin >> year;


if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input for year. Please enter a valid integer next time" << endl;
    return 1; 
}
}
else if (quesion_in_category_or_skip == "no"){
        int category_index;
    cout << "Enter the number of a category to view its products: ";
    cin >> category_index;
    getline(cin, answer_category);
    for (int i = 0; i < sizeof(categories) / sizeof(categories[0]); i++) {
           cout << "Products in the " << categories[category_index-1].name << " category:" << endl;
        for (int j = 0; j < categories[category_index-1].factories.size(); j++) {
            for (int k = 0; k < categories[category_index-1].factories[j].products.size(); k++) {
                cout << categories[category_index-1].factories[j].products[k].name << endl;
            }
           
        }
       break;
    }
    
    

}

else {
    cout << "Unknown command. Exiting..."<< endl; 
}


}
else if (question_category_or_skip == "no"){
      cout << "Do you want to know the number of parts produced for each product in any year? (yes/no): " << endl;
                
                string quesion_in_category_or_skip;
                getline (cin, quesion_in_category_or_skip);
                if (quesion_in_category_or_skip == "no"){
            cout << "The list of all the products:\n";
    for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); i++) {
        for (int j = 0; j < categories[i].factories.size(); j++) {
            for (int k = 0; k < categories[i].factories[j].products.size(); k++) {
                cout << "Category: " << categories[i].name << ", Product: " << categories[i].factories[j].products[k].name << ", Factory: " << categories[i].factories[j].products[k].factory << endl;
            }
        }
    }}
    else if (quesion_in_category_or_skip =="yes"){
cout << "Enter the year for which you want to see the number of parts produced: ";
int year_period;
cin >> year_period;
cout << "The list of all the products produced in " << year_period << ":\n";

for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); i++) {
    for (int j = 0; j < categories[i].factories.size(); j++) {
        for (int k = 0; k < categories[i].factories[j].products.size(); k++) {
            int total_amount = categories[i].factories[j].products[k].getPartsProduced(year_period);
            if (total_amount > 0) {
                cout << "Category: " << categories[i].name << ", Product: " << categories[i].factories[j].products[k].name << ", Factory: " << categories[i].factories[j].products[k].factory << ", Parts produced in " << year_period << ": " << total_amount << endl;
            }
        }
    }
}
    
}
else {cout<< "Unknown command. Exiting..."<< endl;
    break;
}
}
else if (question_category_or_skip == "q"){
    cout << "Exiting the program..." << endl;
    break;
}
        
    }
                else if (answer_category == "2"){
        string factory_name;
        string question_factory_numbers_or_list;
        string quit_factory_number;
    while (true) {
        cout <<"You want to know: " << endl << "1. The number of products produced by a separate factory during a certain period of time" << endl << "2. See the list of products by any factory" << endl;
        getline(cin, question_factory_numbers_or_list);
if (question_factory_numbers_or_list == "1") {
    cout << "There is a list of our factories, choose one of them (by number):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << categories[i].factories[0].name << endl;
    }

    string question_numb_of_factory;
    getline(cin, question_numb_of_factory);

    if (question_numb_of_factory == "q") {
        cout << "Exiting the program..." << endl;
        return 0;
    }

    if (question_numb_of_factory == "1" || question_numb_of_factory == "2" || question_numb_of_factory == "3" || question_numb_of_factory == "4" || question_numb_of_factory == "5") {
        int category_index = stoi(question_numb_of_factory) - 1;
        cout << "You can choose one of these years 2020/2021/2022/2023" << endl;
        string year_answer;
        getline(cin, year_answer);
        int year_index = stoi(year_answer) - 2020;
        int total_amount = 0;
        for (const auto& product : categories[category_index].factories[0].products) {
            total_amount += product.amount_per_time_period[year_index];
        }
        cout << "The number of all the " << categories[category_index].name << " at the " << categories[category_index].factories[0].name << " Factory for " << year_answer << " = " << total_amount << endl;
    }
    else {cout << "Unknown command. Exiting..." << endl;
        return 0;
    }
    
}

        if (question_factory_numbers_or_list == "2") 
        {     cout << "There is a list of our factories:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". " << categories[i].factories[0].name << endl;
    }
            cout << "Enter factory name to see its products (or 'q' to quit): ";
        getline(cin, factory_name);
        if (factory_name == "q") {
            cout<< "Exiting the program..."<< endl;
            
            return 0;}

        bool found = false;
        for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); i++) {
            for (int j = 0; j < categories[i].factories.size(); j++) {
                if (categories[i].factories[j].name == factory_name) {
                    found = true;
                    cout << "Factory " << factory_name << " produces the following products in the " << categories[i].name << " category:\n";
                    for (int k = 0; k < categories[i].factories[j].products.size(); k++) {
                        cout << "- " << categories[i].factories[j].products[k].name << endl;
                    }
                    break;
                }
            }
            if (found) break;
        }
           if (!found) {
        cout << "Factory " << factory_name << " not found. Exiting the program..." << endl;
        return 0;
    }

    }
    else if (question_factory_numbers_or_list == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    } 
    else { cout << "Unknown command. Exiting..." << endl;
    return 0;} 
                }
}




        else if (answer_category == "3"){
            cout << "There is list of names of our areas, chose one of them (by number) if you want to get the number and name of the products that are made here" << endl << "1. AftAoCP (Area for the Assembly of Civil Planes)" << endl << "2. AftAoTP (Area for the Assembly of Transport Planes)" << endl << "3. AftAoMP  (Area for the Assembly of Military Planes)" << endl << "4. AftAoG (Area for the Assembly of Gliders" << endl << "5. AftAoH (Area for the Assembly of Helicopters" << endl << "6. AftAoHG (Area for the Assembly of Hang Gliders " << endl << "7. AftAoAR (Area for the Assembly of Artillery Rockets" << endl << "8. AftAoNR (Area for the Assembly of Naval Rockets" << endl << "9. AftAoAvR (Area for the Assembly on Aviation Rockets" << endl;                                    
        string question_areas;
        getline(cin, question_areas);
         if (question_areas == "q") {
             cout << "Exiting the program..."<< endl;
             
             
             break;}
 if (question_areas == "1" || question_areas == "2" || question_areas == "3" || question_areas == "4" || question_areas == "5" || question_areas == "6" || question_areas == "7" || question_areas == "8" || question_areas == "9") {
    int category_index = stoi(question_areas) - 1;
    cout << "You can choose one of these years: 2020/2021/2022/2023" << endl;
    string year_answer;
    getline(cin, year_answer);
    int year_index = stoi(year_answer) - 2020;
    int total_amount = 0;
    for (const auto& factory : categories[category_index].factories) {
        for (const auto& product : factory.products) {
            if (product.area == "AftAoCP" || product.area == "AftAoTP" || product.area == "AftAoMP" || product.area == "AftAoG" || product.area == "AftAoH" || product.area == "AftAoHG" || product.area == "AftAoAR" || product.area == "AftAoNR" || product.area == "AftAoAvR") {
                total_amount += product.amount_per_time_period[year_index];
            }
        }
    }
    cout << "The total number of all " << categories[category_index].name << " products in the selected area for " << year_answer << " = " << total_amount << endl;
}
else {cout << "Unknown command. Exiting..."<< endl;
    return 0;
}

         
          }

else if (answer_category =="4"){
         cout << "What do you want (to be more precise) 1/2/3 ?" <<endl << "1. Get data on the staffing of the enterprise as a whole" << endl << "2. Get data on the staff of the factory" << endl << "3. Get data on personnel composition the specified categories" << endl;
         string answer_in_answer_4;
         getline (cin, answer_in_answer_4);
if (answer_in_answer_4 == "1") {
        cout << "Technologists:\n";
for (int i = 0; i < sizeof(technologists)/sizeof(technologists[0]); i++) {
    cout << i+1 << ". " << technologists[i].name_and_surname << endl;
}

    cout << "Technicians:\n";
for (int i = 0; i < sizeof(technicians)/sizeof(technicians[0]); i++) {
    cout << i+1 << ". " << technicians[i].name_and_surname << endl;
}

    cout << "Engineers:\n";
for (int i = 0; i < sizeof(engineers)/sizeof(engineers[0]); i++) {
    cout << i+1 << ". " << engineers[i].name_and_surname << endl;
}

    cout << "Collectors:\n";
for (int i = 0; i < sizeof(collectors)/sizeof(collectors[0]); i++) {
    cout << i+1 << ". " << collectors[i].name_and_surname << endl;
}

    cout << "Turners:\n";
for (int i = 0; i < sizeof(turners)/sizeof(turners[0]); i++) {
    cout << i+1 << ". " << turners[i].name_and_surname << endl;
}

    cout << "Locksmiths:\n";
 for (int i = 0; i < sizeof(locksmiths)/sizeof(locksmiths[0]); i++) {
    cout << i+1 << ". " << locksmiths[i].name_and_surname << endl;
}
     cout << "Welders:\n";
 for (int i = 0; i < sizeof(welders)/sizeof(welders[0]); i++) {
    cout << i+1 << ". " << welders[i].name_and_surname << endl;
}    
}
    if (answer_in_answer_4 == "2"){
        string factories[] = {"Factory Planes", "Factory Gliders", "Factory Helicopters", "Factory Hang Gliders", "Factory Rockets"};
int max_employees[] = {14, 11, 11, 5, 16};

cout << "Choose the factory from which you want to see workers:" << endl;

for (int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << factories[i] << endl;
}

string answer_in_answer_in_answer4;
getline(cin, answer_in_answer_in_answer4);
if (answer_in_answer_in_answer4.empty()) {
    cout << "Invalid input. Exiting the program..." << endl;
    return 0;
}

for (char c : answer_in_answer_in_answer4) {
    if (!isdigit(c)) {
        cout << "Invalid input. Exiting the program..." << endl;
        return 0;
    }
}

int factory_index = stoi(answer_in_answer_in_answer4) - 1;

if (factory_index >= 0 && factory_index < 5) {
    for (int i = 1; i <= max_employees[factory_index]; i++) {
        switch (factory_index) {
            case 0:
                cout << employees_in_Factory_planes[i].name_and_surname << " - " << employees_in_Factory_planes[i].position << endl;
                break;
            case 1:
                cout << employees_in_Factory_gliders[i].name_and_surname << " - " << employees_in_Factory_gliders[i].position << endl;
                break;
            case 2:
                cout << employees_in_Factory_helicopters[i].name_and_surname << " - " << employees_in_Factory_helicopters[i].position << endl;
                break;
            case 3:
                cout << employees_in_Factory_hang_gliders[i].name_and_surname << " - " << employees_in_Factory_hang_gliders[i].position << endl;
                break;
            case 4:
                cout << employees_in_Factory_rockets[i].name_and_surname << " - " << employees_in_Factory_rockets[i].position << endl;
                break;
            default:
                break;
        }
    }
} else {
    cout << "Invalid input. Exiting the program..." << endl;
    return 0;
    
}
    
        
        }
        if (answer_in_answer_4 == "3"){ 
            cout<< "Choose the category:" << endl <<"1. Technologists " << endl << "2. Technicians " << endl << "3. Engineers" << endl << "4. Collectors" << endl << "5. Turners" << endl << "6. locksmiths" <<endl << "7. Welders"<< endl;
            
string answer_in_answer_in_answer4;
getline(cin, answer_in_answer_in_answer4);
if (answer_in_answer_in_answer4 == "1"){
        cout << "Technologists of our company:\n";
for (int i = 0; i < sizeof(technologists)/sizeof(technologists[0]); i++) {
    cout << i+1 << ". " << technologists[i].name_and_surname << endl;
}
    
}
  if (answer_in_answer_in_answer4 == "2"){
    cout << "Technicians of our company:\n";
for (int i = 0; i < sizeof(technicians)/sizeof(technicians[0]); i++) {
    cout << i+1 << ". " << technicians[i].name_and_surname << endl;
}}
if (answer_in_answer_in_answer4 == "3"){
    cout << "Engineers of our company:\n";
for (int i = 0; i < sizeof(engineers)/sizeof(engineers[0]); i++) {
    cout << i+1 << ". " << engineers[i].name_and_surname << endl;
}}
if (answer_in_answer_in_answer4 == "4"){
    cout << "Collectors of our company:\n";
for (int i = 0; i < sizeof(collectors)/sizeof(collectors[0]); i++) {
    cout << i+1 << ". " << collectors[i].name_and_surname << endl;
}}
if (answer_in_answer_in_answer4 == "5"){
    cout << "Turners of our company:\n";
for (int i = 0; i < sizeof(turners)/sizeof(turners[0]); i++) {
    cout << i+1 << ". " << turners[i].name_and_surname << endl;
}}
if (answer_in_answer_in_answer4 == "6"){
    cout << "Locksmiths of our company:\n";
 for (int i = 0; i < sizeof(locksmiths)/sizeof(locksmiths[0]); i++) {
    cout << i+1 << ". " << locksmiths[i].name_and_surname << endl;
}}
if (answer_in_answer_in_answer4 == "7"){
     cout << "Welders of our company:\n";
 for (int i = 0; i < sizeof(welders)/sizeof(welders[0]); i++) {
    cout << i+1 << ". " << welders[i].name_and_surname << endl;
}}
else if (answer_in_answer_in_answer4 == "q"){
    cout << "Exiting the program..." << endl;
}
else {
    cout << "Unknown command, please correct your typo next time" << endl;
    return 0;
    
}
            
        }
                if (answer_in_answer_4 == "q"){
            cout<< "Exiting the program..."<< endl;
            return 0;
        }
        else {cout << "Unknown command. Exiting..."<< endl;
            return 0;
        }

        
}
else if (answer_category == "5"){
   cout << "Get the number and list of areas  ...  and their bosses" << endl << "1. of the specified factory" << endl << "2. for all the company" << endl;
   string answer_in_answer_5;
   getline (cin, answer_in_answer_5);
if (answer_in_answer_5 == "1"){
cout << "There is a list of our factories, choose one of them (by number):" << endl;
for (int i = 0; i < 5; i++) {
cout << i+1 << ". " << categories[i].factories[0].name << endl;
}


string answer_in_answer_in_answer5;
getline (cin, answer_in_answer_in_answer5);

int factoryIndex = stoi(answer_in_answer_in_answer5) - 1;
auto& factory = categories[factoryIndex].factories[0];

cout << "Areas in " << factory.name << ":" << endl;
int areaCount = 0;
for (const auto& product : factory.products) {
    cout << "- " << product.area << " (Boss: " << product.boss_of_the_area << ")" << endl;
    areaCount++;
}
cout << "Total Areas: " << areaCount << endl;
}
else if (answer_in_answer_5 == "2"){
int totalAreaCount = 0;
for (int i = 0; i < 5; i++) {
    auto& factory = categories[i].factories[0];
    cout << i+1 << ". " << factory.name << ":" << endl;
    for (const auto& product : factory.products) {
        cout << "- " << product.area << " (Boss: " << product.boss_of_the_area << ")" << endl;
        totalAreaCount++;
    }
}
cout << "Total Areas: " << totalAreaCount << endl;

   
}
else if (answer_in_answer_5 == "q"){
    cout <<  "Exiting the program..."<< endl;
    return 0;
}
else {
    cout << "Unknown command... Exiting" << endl;
    return 0;
}
}
else if (answer_category == "6"){
cout << "There is a list of works that the specified product undergoes" << endl;
cout << "For " << categories[0].name << " (" << categories[0].factories[0].products[0].name << ", " << categories[0].factories[0].products[1].name << ", " << categories[0].factories[0].products[2].name << "):" << endl;
for (int i = 0; i < 6; i++) {
    cout << i + 1 << ". " << categories[0].factories[0].works[i] << endl;
}
cout << "For " << categories[1].name << " (" << categories[1].factories[0].products[0].name << "):" << endl;
for (int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << categories[1].factories[0].works[i] << endl;
}
cout << "For " << categories[2].name << " (" << categories[2].factories[0].products[0].name << "):" << endl;
for (int i = 0; i < 6; i++) {
    cout << i + 1 << ". " << categories[2].factories[0].works[i] << endl;
}
cout << "For " << categories[3].name << " (" << categories[3].factories[0].products[0].name << "):" << endl;
for (int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << categories[3].factories[0].works[i] << endl;
}
cout << "For " << categories[4].name << " (" << categories[4].factories[0].products[0].name << ", " << categories[4].factories[0].products[1].name << ", " << categories[4].factories[0].products[2].name << "):" << endl;
for (int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << categories[4].factories[0].works[i] << endl;
}
    
}

else if (answer_category == "7"){
    cout<< "You want to get the composition of the teams for the..." << endl << "1. Specified area" << endl << "2. Specified factory" << endl;
    string answer_in_answer_7;
    getline (cin, answer_in_answer_7);
    if (answer_in_answer_7 == "1"){
         cout << "There is list of names of our areas, chose one of them (by number)" << endl << "1. " <<categories[0].factories[0].products[0].area << endl << "2. " << categories[0].factories[0].products[1].area << endl << "3. "<< categories[0].factories[0].products[2].area << endl << "4. "<< categories[1].factories[0].products[0].area << endl << "5. "<< categories[2].factories[0].products[0].area << endl << "6. "<< categories[3].factories[0].products[0].area << endl << "7. " <<categories[4].factories[0].products[0].area << endl << "8. "<< categories[4].factories[0].products[1].area << endl << "9. " << categories[4].factories[0].products[2].area << endl;   
 string answer_in_answer_in_answer7;
getline (cin, answer_in_answer_in_answer7);
if (answer_in_answer_in_answer7 == "1") {
    Product product = categories[0].factories[0].products[0];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_in_answer7 == "2") {
    Product product = categories[0].factories[0].products[1];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_in_answer7 == "3") {
    Product product = categories[0].factories[0].products[2];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
 else if (answer_in_answer_in_answer7 == "4") {
    Product product = categories[1].factories[0].products[0];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_in_answer7 == "5") {
    Product product = categories[2].factories[0].products[0];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
   else if (answer_in_answer_in_answer7 == "6") {
    Product product = categories[3].factories[0].products[0];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
    else if (answer_in_answer_in_answer7 == "7") {
    Product product = categories[4].factories[0].products[0];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
     else if (answer_in_answer_in_answer7 == "8") {
    Product product = categories[4].factories[0].products[1];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
       else if (answer_in_answer_in_answer7 == "9") {
    Product product = categories[4].factories[0].products[2];
    cout << "The composition of the teams for the " << product.area << ":" << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
     else if (answer_in_answer_in_answer7 == "q"){
         cout << "Exiting the program..." << endl;
         return 0;
     }
     else {cout << "Unknown command. Exiting..." << endl;
         return 0;
     }
    }
if (answer_in_answer_7 == "2") {
    cout << "There is a list of our factories, choose one of them (by number):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". " << categories[i].factories[0].name << endl;
    }
    string answer_in_answer_in_answer7;
    getline (cin, answer_in_answer_in_answer7);

    int category_index = answer_in_answer_in_answer7[0] - '1';
    int factory_index = 0;

    switch(answer_in_answer_in_answer7[0]) {
        case '1':
            for (int i = 0; i < 3; i++) {
                cout << "Team composition for area " << categories[category_index].factories[factory_index].products[i].area << ":" << endl;
                for (int j = 0; j < categories[category_index].factories[factory_index].products[i].composition_of_area_brigades.size(); j++) {
                    cout << j+1 << ". " << categories[category_index].factories[factory_index].products[i].composition_of_area_brigades[j] << endl;
                }
            }
            return 0 ;
        case '2':
            cout << "Team composition for area " << categories[category_index].factories[factory_index].products[0].area << ":" << endl;
            for (int j = 0; j < categories[category_index].factories[factory_index].products[0].composition_of_area_brigades.size(); j++) {
                cout << j+1 << ". " << categories[category_index].factories[factory_index].products[0].composition_of_area_brigades[j] << endl;
            }
            return 0;
        case '3':
            cout << "The composition of the teams for the " << categories[category_index].factories[factory_index].products[0].area << ":" << endl;
            for (int i = 0; i < categories[category_index].factories[factory_index].products[0].composition_of_area_brigades.size(); i++) {
                cout << i+1 << ". " << categories[category_index].factories[factory_index].products[0].composition_of_area_brigades[i] << endl;
            }
            return 0;
        case '4':
            cout << "The composition of the teams for the " << categories[category_index].factories[factory_index].products[0].area << ":" << endl;
            for (int i = 0; i < categories[category_index].factories[factory_index].products[0].composition_of_area_brigades.size(); i++) {
                cout << i+1 << ". " << categories[category_index].factories[factory_index].products[0].composition_of_area_brigades[i] << endl;
            }
            return 0;
            case'5':
            for (int i = 0; i < 3; i++) {
                cout << "Team composition for area " << categories[category_index].factories[factory_index].products[i].area << ":" << endl;
                for (int j = 0; j < categories[category_index].factories[factory_index].products[i].composition_of_area_brigades.size(); j++) {
                    cout << j+1 << ". " << categories[category_index].factories[factory_index].products[i].composition_of_area_brigades[j] << endl;
                }
                return 0;
            }
            case'q':
            cout << "Exiting the program..."<< endl;
            return 0;
            default:
            cout << "Invalid input. Exiting the program..." << endl;
            return 0;

    
}    
}
else if (answer_in_answer_7 == "q"){
    cout << "Exiting the program..." << endl;
    return 0;
}
else { cout << "Unknown command. Exiting the program..." << endl;
    return 0;
}


      
  
}
else if (answer_category == "8"){
    cout << "What dou you want?" << endl << "1. Get a list of masters of the specified area" << endl << "2. Get a list of masters of the specified factory" << endl;
    string answer_in_answer_8;
    getline (cin, answer_in_answer_8);
    if (answer_in_answer_8 == "1"){
         cout << "There is list of names of our areas, chose one of them (by number)" << endl << "1. " <<categories[0].factories[0].products[0].area << endl << "2. " << categories[0].factories[0].products[1].area << endl << "3. "<< categories[0].factories[0].products[2].area << endl << "4. "<< categories[1].factories[0].products[0].area << endl << "5. "<< categories[2].factories[0].products[0].area << endl << "6. "<< categories[3].factories[0].products[0].area << endl << "7. " <<categories[4].factories[0].products[0].area << endl << "8. "<< categories[4].factories[0].products[1].area << endl << "9. " << categories[4].factories[0].products[2].area << endl;   

string answer_in_answer_in_answer8;
getline (cin, answer_in_answer_in_answer8);
if (answer_in_answer_in_answer8 == "1"){
    cout << "The list of masters of " << categories[0].factories[0].products[0].area << ":"<< endl << "1. " << categories[0].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[0].factories[0].products[0].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "2"){
    cout << "The list of masters of " << categories[0].factories[0].products[1].area << ":"<< endl << "1. " << categories[0].factories[0].products[1].masters_of_the_area[0]<<endl << "2. " << categories[0].factories[0].products[1].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "3"){
    cout << "The list of masters of " << categories[0].factories[0].products[2].area << ":"<< endl << "1. " << categories[0].factories[0].products[2].masters_of_the_area[0]<<endl << "2. " << categories[0].factories[0].products[2].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "4"){
    cout << "The list of masters of " << categories[1].factories[0].products[0].area << ":"<< endl << "1. " << categories[1].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[1].factories[0].products[0].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "5"){
    cout << "The list of masters of " << categories[2].factories[0].products[0].area << ":"<< endl << "1. " << categories[2].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[2].factories[0].products[0].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "6"){
    cout << "The list of masters of " << categories[3].factories[0].products[0].area << ":"<< endl << "1. " << categories[3].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[3].factories[0].products[0].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "7"){
    cout << "The list of masters of " << categories[4].factories[0].products[0].area << ":"<< endl << "1. " << categories[4].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[4].factories[0].products[0].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "8"){
    cout << "The list of masters of " << categories[0].factories[0].products[1].area << ":"<< endl << "1. " << categories[4].factories[0].products[1].masters_of_the_area[0]<<endl << "2. " << categories[4].factories[0].products[1].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "9"){
    cout << "The list of masters of " << categories[0].factories[0].products[2].area << ":"<< endl << "1. " << categories[4].factories[0].products[2].masters_of_the_area[0]<<endl << "2. " << categories[4].factories[0].products[2].masters_of_the_area[1]<<endl;
    
}
if (answer_in_answer_in_answer8 == "q"){
    cout << "Exiting the program..."<< endl;
    return 0;
}
else {cout << "Unknown command. Exiting..."<< endl;
return 0;
    
}
        
    }
if (answer_in_answer_8 == "2") {
    cout << "There is a list of our factories, choose one of them (by number):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". " << categories[i].factories[0].name << endl;
    }
    string answer_in_answer_in_answer8;
    getline(cin, answer_in_answer_in_answer8);

    if (answer_in_answer_in_answer8 == "q") {
        cout << "Exiting the program..." << endl;
        return 0;
    }

    int factory_index = stoi(answer_in_answer_in_answer8) - 1;
    if (factory_index >= 0 && factory_index < 5) {
        cout << "The list of masters of " << categories[factory_index].factories[0].name << ":" << endl;
        for (int j = 0; j < categories[factory_index].factories[0].masters_of_the_factory.size(); j++) {
            cout << j+1 << ". " << categories[factory_index].factories[0].masters_of_the_factory[j] << endl;
        }
    }
    else {
        cout << "Invalid input. Exiting..." << endl;
        return 0;
    }
}

else if (answer_in_answer_8 == "q"){
    cout << "Exiting the program..." << endl;
    return 0;
}
else {cout << "Unknown command. Exiting..." << endl;
    return 0;
}
}
else if (answer_category == "9"){
        cout << "What dou you want?" << endl << "1. Get a list of products of a separate category which are collected..." << endl << "2. Get a list of products in general which are collected" << endl;
    string answer_in_answer_9;
    getline (cin, answer_in_answer_9);
    if (answer_in_answer_9 == "1"){
        cout << "1. By area" << endl << "2. By factory" << endl << "3. By enterprise"<< endl;
     string answer_in_answer_in_answer9;
    getline (cin, answer_in_answer_in_answer9);
if (answer_in_answer_in_answer9 == "1") {
string areas[9];
string names[9];

int index = 0;
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < categories[i].factories[0].products.size(); j++) {
        areas[index] = categories[i].factories[0].products[j].area;
        if (i == 0) {
            names[index] = categories[i].factories[0].products[j].name + " " + categories[i].name;
        } else if (i == 4) {
            names[index] = categories[i].factories[0].products[j].name + " " + categories[i].name;
        } else {
            names[index] = categories[i].factories[0].products[j].name;
        }
        index++;
    }
}

cout << "There is list of names of our areas, choose one of them (by number):" << endl;
for (int i = 0; i < 9; i++) {
    cout << i+1 << ". " << areas[i] << endl;
}

string answer;
getline(cin, answer);
int chosenIndex = stoi(answer) - 1;

cout << "Category - " << categories[chosenIndex / 3].name << endl;
cout << "Area - " << areas[chosenIndex] << endl;
cout << "Products - " << names[chosenIndex] << endl;
}
if (answer_in_answer_in_answer9 == "2"){
        cout << "There is a list of our factories, choose one of them (by number):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". " << categories[i].factories[0].name << endl;
    }
    string answer_in_answer_in_answer_in_answer9;
    getline (cin, answer_in_answer_in_answer_in_answer9);
   
int answer_num = stoi(answer_in_answer_in_answer_in_answer9);
switch (answer_num) {
    case 1:
        cout << "Category - " << categories[0].name << endl << "Factory - "<< categories[0].factories[0].name << endl << "Products: " << endl << "1. " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl << "2. "<<categories[0].factories[0].products[1].name + " " + categories[0].name << endl << "3. "<<categories[0].factories[0].products[2].name + " " + categories[0].name << endl;
        break;
    case 2:
        cout << "Category - " << categories[1].name << endl << "Factory - "<< categories[1].factories[0].name << endl << "Products - " << categories[1].factories[0].products[0].name << endl;
        break;
    case 3:
        cout << "Category - " << categories[2].name << endl << "Factory - "<< categories[2].factories[0].name << endl << "Products - " << categories[2].factories[0].products[0].name << endl;
        break;
    case 4:
        cout << "Category - " << categories[3].name << endl << "Factory - "<< categories[3].factories[0].name << endl << "Products - " << categories[3].factories[0].products[0].name << endl;
        break;
    case 5:
        cout << "Category - " << categories[4].name << endl << "Factory - "<< categories[4].factories[0].name << endl << "Products: " << endl << "1. "<< categories[4].factories[0].products[0].name + " " + categories[4].name << endl <<"2. "<< categories[4].factories[0].products[1].name + " " + categories[4].name << endl <<"3. "<< categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
        break;
        case 'q':
        cout << "Exiting the program..."<< endl;
        return 0;
    default:
        cout << "Invalid input. Exiting the program..." << endl;
        return 0;
}


}
if (answer_in_answer_in_answer9 == "3"){
cout << "A list of products of all the company:" << endl;
cout << "Category - " << categories[0].name << endl << "Products: " << endl;
cout << "1. " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl;
cout << "2. " << categories[0].factories[0].products[1].name + " " + categories[0].name << endl;
cout << "3. " << categories[0].factories[0].products[2].name + " " + categories[0].name << endl << endl;
cout << "Category - " << categories[1].name << endl << "Products - " << categories[1].factories[0].products[0].name << endl << endl;
cout << "Category - " << categories[2].name  << endl << "Products - " << categories[2].factories[0].products[0].name << endl << endl;
cout << "Category - " << categories[3].name << endl<< "Products - " << categories[3].factories[0].products[0].name << endl << endl;
cout << "Category - " << categories[4].name << endl <<"Products: " << endl;
cout << "1. "<< categories[4].factories[0].products[0].name + " " + categories[4].name << endl;
cout << "2. " <<categories[4].factories[0].products[1].name + " " + categories[4].name << endl;
cout << "3. "<<categories[4].factories[0].products[2].name + " " + categories[4].name << endl;

}

   if (answer_in_answer_in_answer9 == "q"){
       cout << "Exiting the program..."<< endl;
       return 0;
   } 
   else {
       cout << "Unknown command. Exiting the program..."<< endl;
       return 0;
   }
        
    }
    if (answer_in_answer_9 == "2"){
              cout << "1. By area" << endl << "2. By factory" << endl << "3. By enterprise"<< endl;
     string answer_in_answer_in_answer9;
    getline (cin, answer_in_answer_in_answer9);
if (answer_in_answer_in_answer9 == "1") {
    string areas[] = {
        categories[0].factories[0].products[0].area,
        categories[0].factories[0].products[1].area,
        categories[0].factories[0].products[2].area,
        categories[1].factories[0].products[0].area,
        categories[2].factories[0].products[0].area,
        categories[3].factories[0].products[0].area,
        categories[4].factories[0].products[0].area,
        categories[4].factories[0].products[1].area,
        categories[4].factories[0].products[2].area
    };
    string names[] = {
        categories[0].factories[0].products[0].name + " " + categories[0].name,
        categories[0].factories[0].products[1].name + " " + categories[0].name,
        categories[0].factories[0].products[2].name + " " + categories[0].name,
        categories[1].factories[0].products[0].name,
        categories[2].factories[0].products[0].name,
        categories[3].factories[0].products[0].name,
        categories[4].factories[0].products[0].name + " " + categories[4].name,
        categories[4].factories[0].products[1].name + " " + categories[4].name,
        categories[4].factories[0].products[2].name + " " + categories[4].name
    };
    cout << "There is list of names of our areas, choose one of them (by number):" << endl;
    for (int i = 0; i < 9; i++) {
        cout << i+1 << ". " << areas[i] << endl;
    }
    string answer;
    getline(cin, answer);
    int index = stoi(answer) - 1;
    cout << "Area - " << areas[index] << endl;
    cout << "Products - " << names[index] << endl;
}
if (answer_in_answer_in_answer9 == "2"){
        cout << "There is a list of our factories, choose one of them (by number):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". " << categories[i].factories[0].name << endl;
    }
    string answer_in_answer_in_answer_in_answer9;
    getline (cin, answer_in_answer_in_answer_in_answer9);
int answer = std::stoi(answer_in_answer_in_answer_in_answer9);

switch (answer) {
    case 1:
        cout << "Factory - "<< categories[0].factories[0].name << endl << "Products: " << endl << "1. " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl << "2. "<<categories[0].factories[0].products[1].name + " " + categories[0].name << endl << "3. "<<categories[0].factories[0].products[2].name + " " + categories[0].name << endl;
        break;
    case 2:
        cout << "Factory - "<< categories[1].factories[0].name << endl << "Products - " << categories[1].factories[0].products[0].name << endl;
        break;
    case 3:
        cout << "Factory - "<< categories[2].factories[0].name << endl << "Products - " << categories[2].factories[0].products[0].name << endl;
        break;
    case 4:
        cout << "Factory - "<< categories[3].factories[0].name << endl << "Products - " << categories[3].factories[0].products[0].name << endl;
        break;
    case 5:
        cout << "Factory - "<< categories[4].factories[0].name << endl << "Products: " << endl << "1. "<< categories[4].factories[0].products[0].name + " " + categories[4].name << endl <<"2. "<< categories[4].factories[0].products[1].name + " " + categories[4].name << endl <<"3. "<< categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
        break;
        case 'q':
        cout << "Exiting the program..." << endl;
        return 0;
    default:
        cout << "Invalid input. Exiting the program..." << endl;
        return 0;
}


}
if (answer_in_answer_in_answer9 == "3"){
cout << "A list of products of all the company:" << endl;
for (int i = 0; i < 3; i++) {
    cout << i+1 << ". " << categories[0].factories[0].products[i].name + " " + categories[0].name << endl;
}
cout << "4. "<< categories[1].factories[0].products[0].name << endl;
cout << "5. " << categories[2].factories[0].products[0].name << endl;
cout << "6. " << categories[3].factories[0].products[0].name << endl;
for (int i = 0; i < 3; i++) {
    cout << i+7 << ". " << categories[4].factories[0].products[i].name + " " + categories[4].name << endl;
}


}  
else if (answer_in_answer_in_answer9 == "q") {
    cout << "Exiting the program..." << endl;
    return 0;
}
else {
    cout << "Unknown command. Exiting the program ..."<< endl;
    return 0;
}

        
    }
        else if (answer_in_answer_9 == "q"){
        cout << "Exiting the program"<< endl;
        return 0;
    } 
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
   
    
}
    else if (answer_category == "10"){
        cout << "Choose a product (by number):" << endl;
        for (int i = 0; i < 3; i++) {
    cout << i+1 << ". " << categories[0].factories[0].products[i].name + " " + categories[0].name << endl;
}
cout << "4. "<< categories[1].factories[0].products[0].name << endl;
cout << "5. " << categories[2].factories[0].products[0].name << endl;
cout << "6. " << categories[3].factories[0].products[0].name << endl;
for (int i = 0; i < 3; i++) {
    cout << i+7 << ". " << categories[4].factories[0].products[i].name + " " + categories[4].name << endl;
}
string answer_in_answer_10;
getline (cin, answer_in_answer_10);
if (answer_in_answer_10 == "1") {
    Product product = categories[0].factories[0].products[0];
    cout << "The composition of the brigades participating in the assembly of " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_10 == "2") {
    Product product = categories[0].factories[0].products[1];
    cout << "The composition of the brigades participating in the assembly of " << categories[0].factories[0].products[1].name + " " + categories[0].name << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_10 == "3") {
    Product product = categories[0].factories[0].products[2];
   cout << "The composition of the brigades participating in the assembly of " << categories[0].factories[0].products[2].name + " " + categories[0].name << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
 else if (answer_in_answer_10 == "4") {
    Product product = categories[1].factories[0].products[0];
    cout << "The composition of the brigades participating in the assembly of " << categories[1].factories[0].products[0].name  << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_10 == "5") {
    Product product = categories[2].factories[0].products[0];
   cout << "The composition of the brigades participating in the assembly of " << categories[2].factories[0].products[0].name  << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
   else if (answer_in_answer_10 == "6") {
    Product product = categories[3].factories[0].products[0];
   cout << "The composition of the brigades participating in the assembly of " << categories[3].factories[0].products[0].name  << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
    else if (answer_in_answer_10 == "7") {
    Product product = categories[4].factories[0].products[0];
    cout << "The composition of the brigades participating in the assembly of " << categories[4].factories[0].products[0].name  + " " + categories[4].name << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
     else if (answer_in_answer_10 == "8") {
    Product product = categories[4].factories[0].products[1];
    cout << "The composition of the brigades participating in the assembly of " << categories[4].factories[0].products[1].name + " " + categories[4].name << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
       else if (answer_in_answer_10 == "9") {
    Product product = categories[4].factories[0].products[2];
       cout << "The composition of the brigades participating in the assembly of " << categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
    }
}
else if (answer_in_answer_10 == "q"){
    cout << "Exiting the program..."<< endl;
    return 0;
}
else {
    cout <<"Unknown command. Exiting the program..."<< endl;
    return 0;
}
    }
    
    
    else if (answer_category == "11"){
         cout << "Choose a product (by number):" << endl;
        for (int i = 0; i < 3; i++) {
    cout << i+1 << ". " << categories[0].factories[0].products[i].name + " " + categories[0].name << endl;
}
cout << "4. "<< categories[1].factories[0].products[0].name << endl;
cout << "5. " << categories[2].factories[0].products[0].name << endl;
cout << "6. " << categories[3].factories[0].products[0].name << endl;
for (int i = 0; i < 3; i++) {
    cout << i+7 << ". " << categories[4].factories[0].products[i].name + " " + categories[4].name << endl;
}
string answer_in_answer_11; 
getline (cin, answer_in_answer_11);
int answer = std::stoi(answer_in_answer_11);
switch (answer) {
    case 1:
        cout << "Laboratory, which tests " << categories[0].factories[0].products[0].name + " " + categories[0].name << " — " << categories[0].factories[0].name_of_laboratory << endl;
        break;
    case 2:
        cout << "Laboratory, which tests " <<  categories[0].factories[0].products[1].name + " " + categories[0].name << " — " << categories[0].factories[0].name_of_laboratory << endl;
        break;
    case 3:
        cout << "Laboratory, which tests " <<  categories[0].factories[0].products[2].name + " " + categories[0].name << " — " << categories[0].factories[0].name_of_laboratory << endl;
        break;
    case 4:
        cout << "Laboratory, which tests " <<  categories[1].factories[0].products[0].name  << " — " << categories[1].factories[0].name_of_laboratory << endl;
        break;
    case 5:
        cout << "Laboratory, which tests " <<  categories[2].factories[0].products[0].name << " — " << categories[2].factories[0].name_of_laboratory << endl;
        break;
    case 6:
        cout << "Laboratory, which tests " <<  categories[3].factories[0].products[0].name << " — " << categories[3].factories[0].name_of_laboratory << endl;
        break;
    case 7:
        cout << "Laboratory, which tests " <<  categories[4].factories[0].products[0].name + " " + categories[4].name << " — " << categories[4].factories[0].name_of_laboratory << endl;
        break;
    case 8:
        cout << "Laboratory, which tests " <<  categories[4].factories[0].products[1].name + " " + categories[4].name << " — " << categories[4].factories[0].name_of_laboratory << endl;
        break;
    case 9:
        cout << "Laboratory, which tests " <<  categories[4].factories[0].products[2].name + " " + categories[4].name << " — " << categories[4].factories[0].name_of_laboratory << endl;
        break;
        case 'q':
        cout << "Exiting the program..."<< endl;
        return 0;
        default:
        cout << "Invalid input. Exiting the program..." << endl;
        return 0;
}
        
        
    }
    else if (answer_category == "12"){
        cout << "1. Get a list of products of a separate category" << endl << "2. Get a list of products in general"  << endl; 
        string answer_in_answer_12;
        getline (cin, answer_in_answer_12);
        if (answer_in_answer_12 == "2"){
cout << "This is a list of laboratories, select one" << endl << "1. "<< categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " <<categories[2].factories[0].name_of_laboratory << endl << "4. " <<   categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl ; 
        string answer_in_answer_in_answer12;
        getline (cin, answer_in_answer_in_answer12);
    if (answer_in_answer_in_answer12 == "1") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[0].factories[0].name_of_laboratory << " (Planes):" << endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Planes") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
            cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;
        }
    }
    if (answer_in_answer_in_answer12 == "2") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[1].factories[0].name_of_laboratory << endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Gliders") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "3") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[2].factories[0].name_of_laboratory << endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Helicopters") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "4") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[3].factories[0].name_of_laboratory << endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Hang gliders") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "5") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[4].factories[0].name_of_laboratory << " (Rockets): " << endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Rockets") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    else if (answer_in_answer_in_answer12 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
       cout << "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
        
        
    }
    else if (answer_in_answer_12 == "1"){
        cout << "This is a list of laboratories, select one" << endl << "1. "<< categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " <<categories[2].factories[0].name_of_laboratory << endl << "4. " <<   categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl ; 
               string answer_in_answer_in_answer12;
        getline (cin, answer_in_answer_in_answer12);
    if (answer_in_answer_in_answer12 == "1") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[0].factories[0].name_of_laboratory << ". (Category - " << categories[0].name <<"):"<< endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Planes") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "2") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[1].factories[0].name_of_laboratory << ". (Category - " << categories[1].name <<"):"<< endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Gliders") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "3") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[2].factories[0].name_of_laboratory << ". (Category - " << categories[2].name <<"):"<< endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Helicopters") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "4") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[3].factories[0].name_of_laboratory << ". (Category - " << categories[3].name <<"):"<< endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Hang gliders") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    }
    if (answer_in_answer_in_answer12 == "5") {
        string start_date;
        string end_date;

        cout << "Enter start date (YYYY-MM-DD): ";
        cin >> start_date;

        cout << "Enter end date (YYYY-MM-DD): ";
        cin >> end_date;

        if (!isValidDate(start_date) || !isValidDate(end_date)) {
            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
            return 0;
        }
                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[4].factories[0].name_of_laboratory << ". (Category - " << categories[4].name <<"):"<< endl;

        bool found_product = false;

        for (const auto& category : categories) {
            if (category.name == "Rockets") {
                for (const auto& factory : category.factories) {
                    for (const auto& product : factory.products) {
                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
                            cout << product.name << endl;
                            found_product = true;
                        }
                    }
                }
            }
        }

        if (!found_product) {
  cout << "No products found within the specified period, Exiting the program..." << endl;
            return 0;        }
    } 
     else if (answer_in_answer_in_answer12 =="q"){
    cout << "Exiting the program..."<< endl;
    return 0;
}
else {
    cout << "Unknown command. Exiting the program..."<< endl;
    return 0;
}   
        
        
    }
else if (answer_in_answer_12 =="q"){
    cout << "Exiting the program..."<< endl;
    return 0;
}
else {
    cout << "Unknown command. Exiting the program..."<< endl;
    return 0;
}
     
     


return 0;

}
if (answer_category == "13"){
 cout << "There is a list of our laboratories, chose any (by number):"<< endl << "1. " << categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " << categories[2].factories[0].name_of_laboratory << endl << "4. " << categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl; 
    
     string answer_in_answer_13; 
     getline (cin, answer_in_answer_13); 
     if (answer_in_answer_13 == "1"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer13;
     getline (cin, answer_in_answer_in_answer13);
if (answer_in_answer_in_answer13 == "1") {
    cout << "There is a list of products for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[0].factories[0].products[0].name << " " << categories[0].name << endl
         << "2. " << categories[0].factories[0].products[1].name << " " << categories[0].name << endl
         << "3. " << categories[0].factories[0].products[2].name << " " << categories[0].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

        // Access the desired product and its testers based on the selected years
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[0].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer13 == "2") {
                int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

        
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[0].factories[0].products[1];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer13 == "3") {
                       int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

       
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[0].factories[0].products[2];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    else if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
}

if (answer_in_answer_in_answer13 == "2") {
    cout << "There is a list of categories for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[0].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[0].name << ":" << endl << endl;

       
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[0]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Testers for year " << year << ": ";
                        const vector<string>& testers = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.testers_per_time_2020;
                                case 2021:
                                    return product.testers_per_time_2021;
                                case 2022:
                                    return product.testers_per_time_2022;
                                case 2023:
                                    return product.testers_per_time_2023;
                                default:
                                    return product.testers_per_time_2020;
                            }
                        }();
                        for (const string& tester : testers) {
                            cout << tester << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
    else if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout<<"Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    break;
}

if (answer_in_answer_in_answer13 == "3") {
    int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

   
    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[0]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Testers for year " << year << ": ";
                    const vector<string>& testers = [&]() {
                        switch (year) {
                            case 2020:
                                return product.testers_per_time_2020;
                            case 2021:
                                return product.testers_per_time_2021;
                            case 2022:
                                return product.testers_per_time_2022;
                            case 2023:
                                return product.testers_per_time_2023;
                            default:
                                return product.testers_per_time_2020;
                        }
                    }();
                    for (const string& tester : testers) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
else if (answer_in_answer_in_answer13 == "q"){
    cout << "Exiting the program..."<< endl;
    return 0;
}
else {
    cout << "Unknown command. Exiting the program..."<< endl;
    return 0;
}
         
     }
     
     
     //------------------------------------------------------------------------
     
     
       if (answer_in_answer_13 == "2"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer13;
     getline (cin, answer_in_answer_in_answer13);
if (answer_in_answer_in_answer13 == "1") {
    cout << "There is a list of products for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[1].factories[0].products[0].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[1].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknowm command. Exiting the program..."<< endl;
        return 0;
    }

}

if (answer_in_answer_in_answer13 == "2") {
    cout << "There is a list of categories for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[1].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[1].name << ":" << endl << endl;

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[0]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Testers for year " << year << ": ";
                        const vector<string>& testers = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.testers_per_time_2020;
                                case 2021:
                                    return product.testers_per_time_2021;
                                case 2022:
                                    return product.testers_per_time_2022;
                                case 2023:
                                    return product.testers_per_time_2023;
                                default:
                                    return product.testers_per_time_2020;
                            }
                        }();
                        for (const string& tester : testers) {
                            cout << tester << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
        if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknowm command. Exiting the program..."<< endl;
        return 0;
    }
    
    break;
}

if (answer_in_answer_in_answer13 == "3") {
    int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[1]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Testers for year " << year << ": ";
                    const vector<string>& testers = [&]() {
                        switch (year) {
                            case 2020:
                                return product.testers_per_time_2020;
                            case 2021:
                                return product.testers_per_time_2021;
                            case 2022:
                                return product.testers_per_time_2022;
                            case 2023:
                                return product.testers_per_time_2023;
                            default:
                                return product.testers_per_time_2020;
                        }
                    }();
                    for (const string& tester : testers) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
if (answer_in_answer_in_answer13 == "q"){
    cout<<"Exiting the program..."<< endl;
    return 0;
}
else {
    cout << "Unknowm command. Exiting the program..."<< endl;
    return 0;
}
         
     }
     
     //---------------------------------------------------------------------------------
     
          if (answer_in_answer_13 == "3"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer13;
     getline (cin, answer_in_answer_in_answer13);
if (answer_in_answer_in_answer13 == "1") {
    cout << "There is a list of products for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[2].factories[0].products[0].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

   
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[2].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
        if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknowm command. Exiting the program..."<< endl;
        return 0;
    }

}

if (answer_in_answer_in_answer13 == "2") {
    cout << "There is a list of categories for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[2].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[2].name << ":" << endl << endl;


        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[2];
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Testers for year " << year << ": ";
                        const vector<string>& testers = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.testers_per_time_2020;
                                case 2021:
                                    return product.testers_per_time_2021;
                                case 2022:
                                    return product.testers_per_time_2022;
                                case 2023:
                                    return product.testers_per_time_2023;
                                default:
                                    return product.testers_per_time_2020;
                            }
                        }();
                        for (const string& tester : testers) {
                            cout << tester << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
        if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknowm command. Exiting the program..."<< endl;
        return 0;
    }
    break;
}

if (answer_in_answer_in_answer13 == "3") {
    int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }


    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[2]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Testers for year " << year << ": ";
                    const vector<string>& testers = [&]() {
                        switch (year) {
                            case 2020:
                                return product.testers_per_time_2020;
                            case 2021:
                                return product.testers_per_time_2021;
                            case 2022:
                                return product.testers_per_time_2022;
                            case 2023:
                                return product.testers_per_time_2023;
                            default:
                                return product.testers_per_time_2020;
                        }
                    }();
                    for (const string& tester : testers) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
   else if (answer_in_answer_in_answer13 == "q"){
       cout << "Exiting the program..."<< endl;
       return 0;
   }
   else {
       cout << "Unknown command. Exiting the program..."<< endl;
       return 0;
   }
     }
     
     //-----------------------------------------------------------------------------------------------
     
              if (answer_in_answer_13 == "4"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer13;
     getline (cin, answer_in_answer_in_answer13);
if (answer_in_answer_in_answer13 == "1") {
    cout << "There is a list of products for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[3].factories[0].products[0].name  << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[3].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    else if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknown command. Exiting the program..."<< endl;
        return 0;
    }

}

if (answer_in_answer_in_answer13 == "2") {
    cout << "There is a list of categories for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[3].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[3].name << ":" << endl << endl;

    
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[3]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Testers for year " << year << ": ";
                        const vector<string>& testers = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.testers_per_time_2020;
                                case 2021:
                                    return product.testers_per_time_2021;
                                case 2022:
                                    return product.testers_per_time_2022;
                                case 2023:
                                    return product.testers_per_time_2023;
                                default:
                                    return product.testers_per_time_2020;
                            }
                        }();
                        for (const string& tester : testers) {
                            cout << tester << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
        else if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout << "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout << "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    break;
}

if (answer_in_answer_in_answer13 == "3") {
    int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }


    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[3]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Testers for year " << year << ": ";
                    const vector<string>& testers = [&]() {
                        switch (year) {
                            case 2020:
                                return product.testers_per_time_2020;
                            case 2021:
                                return product.testers_per_time_2021;
                            case 2022:
                                return product.testers_per_time_2022;
                            case 2023:
                                return product.testers_per_time_2023;
                            default:
                                return product.testers_per_time_2020;
                        }
                    }();
                    for (const string& tester : testers) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
else if (answer_in_answer_in_answer13 == "q"){
    cout<< "Exiting the program..."<< endl;
    return 0;
}
else {
    cout << "Unknown command. Exiting the program"<< endl;
    return 0;
}
         
     }
     
     //----------------------------------------------------------------------------------------------------------
          if (answer_in_answer_13 == "5"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer13;
     getline (cin, answer_in_answer_in_answer13);
if (answer_in_answer_in_answer13 == "1") {
    cout << "There is a list of products for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[4].factories[0].products[0].name << " " << categories[0].name << endl
         << "2. " << categories[4].factories[0].products[1].name << " " << categories[0].name << endl
         << "3. " << categories[4].factories[0].products[2].name << " " << categories[0].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[4].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        }else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    
    if (answer_in_answer_in_answer_in_answer13 == "2") {
                int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[4].factories[0].products[1];
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer13 == "3") {
                       int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

     
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[4].factories[0].products[2];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& tester : product.testers_per_time_2020) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& tester : product.testers_per_time_2022) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& tester : product.testers_per_time_2023) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    else if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout<< "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
}
}

if (answer_in_answer_in_answer13 == "2") {
    cout << "There is a list of categories for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[4].name << endl;

    string answer_in_answer_in_answer_in_answer13;
    getline(cin, answer_in_answer_in_answer_in_answer13);
    if (answer_in_answer_in_answer_in_answer13 == "1") {
        int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[4].name << ":" << endl << endl;

    
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[4]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Testers for year " << year << ": ";
                        const vector<string>& testers = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.testers_per_time_2020;
                                case 2021:
                                    return product.testers_per_time_2021;
                                case 2022:
                                    return product.testers_per_time_2022;
                                case 2023:
                                    return product.testers_per_time_2023;
                                default:
                                    return product.testers_per_time_2020;
                            }
                        }();
                        for (const string& tester : testers) {
                            cout << tester << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
        else if (answer_in_answer_in_answer_in_answer13 == "q"){
        cout<< "Exiting the program..."<< endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    break;
}

if (answer_in_answer_in_answer13 == "3") {
    int startYear, endYear;
    cout << "Enter start year: ";
      if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    cout << "Enter end year: ";
    cin >> endYear;
        if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

 
    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[4]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Testers for year " << year << ": ";
                    const vector<string>& testers = [&]() {
                        switch (year) {
                            case 2020:
                                return product.testers_per_time_2020;
                            case 2021:
                                return product.testers_per_time_2021;
                            case 2022:
                                return product.testers_per_time_2022;
                            case 2023:
                                return product.testers_per_time_2023;
                            default:
                                return product.testers_per_time_2020;
                        }
                    }();
                    for (const string& tester : testers) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}

   else if (answer_in_answer_in_answer13 == "q"){
       cout << "Exiting the program..."<< endl;
       return 0;
   }
   else {
       cout << "Unknown command. Exiting the program..."<< endl;
       return 0;
   }

         
     }
     else if (answer_in_answer_13 == "q"){
         cout << "Exiting the program..." << endl;
         return 0;
     }
     else {
         cout << "Unknown command. Exiting the program..."<< endl;
         return 0;
     }
 }
       if (answer_category == "14"){
            cout << "There is a list of our laboratories, chose any (by number):"<< endl << "1. " << categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " << categories[2].factories[0].name_of_laboratory << endl << "4. " << categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl; 
    
     string answer_in_answer_14; 
     getline (cin, answer_in_answer_14); 
     if (answer_in_answer_14 == "1"){ cout << "Get the composition of the equipment used in the test" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer14;
     getline (cin, answer_in_answer_in_answer14);
if (answer_in_answer_in_answer14 == "1") {
    cout << "There is a list of products for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[0].factories[0].products[0].name << " " << categories[0].name << endl
         << "2. " << categories[0].factories[0].products[1].name << " " << categories[0].name << endl
         << "3. " << categories[0].factories[0].products[2].name << " " << categories[0].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[0].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Equipment for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Equipment for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Equipment for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer14 == "2") {
                int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

       
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[0].factories[0].products[1];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer14 == "3") {
                       int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

     
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[0].factories[0].products[2]; 
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Testers for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
}

if (answer_in_answer_in_answer14 == "2") {
    cout << "There is a list of categories for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[0].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[0].name << ":" << endl << endl;

     
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[0]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Equipment for year " << year << ": ";
                        const vector<string>& testers = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.equipment_per_time_2020;
                                case 2021:
                                    return product.equipment_per_time_2021;
                                case 2022:
                                    return product.equipment_per_time_2022;
                                case 2023:
                                    return product.equipment_per_time_2023;
                                default:
                                    return product.equipment_per_time_2020;
                            }
                        }();
                        for (const string& tester : testers) {
                            cout << tester << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
        else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    
    break;
}

if (answer_in_answer_in_answer14 == "3") {
    int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[0]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Equipment for year " << year << ": ";
                    const vector<string>& testers = [&]() {
                        switch (year) {
                            case 2020:
                                return product.equipment_per_time_2020;
                            case 2021:
                                return product.equipment_per_time_2021;
                            case 2022:
                                return product.equipment_per_time_2022;
                            case 2023:
                                return product.equipment_per_time_2023;
                            default:
                                return product.equipment_per_time_2020;
                        }
                    }();
                    for (const string& tester : testers) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
else if (answer_in_answer_in_answer14 == "q"){
    cout <<"Exiting the program..."<< endl;
    return 0;
}
else {
    cout<< "Unknown command. Exiting the program..."<< endl;
    return 0;
}
         
     }
     
     
     //------------------------------------------------------------------------
     
     
       if (answer_in_answer_14 == "2"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer14;
     getline (cin, answer_in_answer_in_answer14);
if (answer_in_answer_in_answer14 == "1") {
    cout << "There is a list of products for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[1].factories[0].products[0].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

       
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[1].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Equipment for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Equipment for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Equipment for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    
          else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }  
    

}

if (answer_in_answer_in_answer14 == "2") {
    cout << "There is a list of categories for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[1].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[1].name << ":" << endl << endl;

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[0];
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Equipment for year " << year << ": ";
                        const vector<string>& equipment = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.equipment_per_time_2020;
                                case 2021:
                                    return product.equipment_per_time_2021;
                                case 2022:
                                    return product.equipment_per_time_2022;
                                case 2023:
                                    return product.equipment_per_time_2023;
                                default:
                                    return product.equipment_per_time_2020;
                            }
                        }();
                        for (const string& equipment : equipment) {
                            cout << equipment << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
             else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }  
    
    
    break;
}

if (answer_in_answer_in_answer14 == "3") {
    int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

   
    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[1]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Equipment for year " << year << ": ";
                    const vector<string>& equipment = [&]() {
                        switch (year) {
                            case 2020:
                                return product.equipment_per_time_2020;
                            case 2021:
                                return product.equipment_per_time_2021;
                            case 2022:
                                return product.equipment_per_time_2022;
                            case 2023:
                                return product.equipment_per_time_2023;
                            default:
                                return product.equipment_per_time_2020;
                        }
                    }();
                    for (const string& equipment : equipment) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}

else if (answer_in_answer_in_answer14 == "q"){
    cout <<"Exiting the program..."<< endl;
    return 0;
}
else {
    cout<< "Unknown command. Exiting the program..."<< endl;
    return 0;
}


         
     }
     
     //---------------------------------------------------------------------------------
     
          if (answer_in_answer_14 == "3"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer14;
     getline (cin, answer_in_answer_in_answer14);
if (answer_in_answer_in_answer14 == "1") {
    cout << "There is a list of products for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[2].factories[0].products[0].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }


       
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[2].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Testers for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Testers for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Testers for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    
              else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    } 

}

if (answer_in_answer_in_answer14 == "2") {
    cout << "There is a list of categories for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[2].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[2].name << ":" << endl << endl;

   
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[2]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Equipment for year " << year << ": ";
                        const vector<string>& equipment = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.equipment_per_time_2020;
                                case 2021:
                                    return product.equipment_per_time_2021;
                                case 2022:
                                    return product.equipment_per_time_2022;
                                case 2023:
                                    return product.equipment_per_time_2023;
                                default:
                                    return product.equipment_per_time_2020;
                            }
                        }();
                        for (const string& equipment : equipment) {
                            cout << equipment << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
    
                  else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    } 
    
    
    break;
}

if (answer_in_answer_in_answer14 == "3") {
    int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

    
    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[2]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Equipment for year " << year << ": ";
                    const vector<string>& equipment = [&]() {
                        switch (year) {
                            case 2020:
                                return product.equipment_per_time_2020;
                            case 2021:
                                return product.equipment_per_time_2021;
                            case 2022:
                                return product.equipment_per_time_2022;
                            case 2023:
                                return product.equipment_per_time_2023;
                            default:
                                return product.equipment_per_time_2020;
                        }
                    }();
                    for (const string& equipment : equipment) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
else if (answer_in_answer_in_answer14 == "q"){
    cout <<"Exiting the program..."<< endl;
    return 0;
}
else {
    cout<< "Unknown command. Exiting the program..."<< endl;
    return 0;
}
         
     }
     
     //-----------------------------------------------------------------------------------------------
     
              if (answer_in_answer_14 == "4"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer14;
     getline (cin, answer_in_answer_in_answer14);
if (answer_in_answer_in_answer14 == "1") {
    cout << "There is a list of products for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[3].factories[0].products[0].name  << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }


     
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[3].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Equipment for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Equipment for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Equipment for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    
                    else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }   
    
    
    

}

if (answer_in_answer_in_answer14 == "2") {
    cout << "There is a list of categories for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[3].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[3].name << ":" << endl << endl;

       
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[3]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Equipment for year " << year << ": ";
                        const vector<string>& equipment = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.equipment_per_time_2020;
                                case 2021:
                                    return product.equipment_per_time_2021;
                                case 2022:
                                    return product.equipment_per_time_2022;
                                case 2023:
                                    return product.equipment_per_time_2023;
                                default:
                                    return product.equipment_per_time_2020;
                            }
                        }();
                        for (const string& equipment : equipment) {
                            cout << equipment << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
    
                        else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    } 
    
    
    break;
}

if (answer_in_answer_in_answer14 == "3") {
    int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

   
    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[3];
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Equipment for year " << year << ": ";
                    const vector<string>& equipment = [&]() {
                        switch (year) {
                            case 2020:
                                return product.equipment_per_time_2020;
                            case 2021:
                                return product.equipment_per_time_2021;
                            case 2022:
                                return product.equipment_per_time_2022;
                            case 2023:
                                return product.equipment_per_time_2023;
                            default:
                                return product.equipment_per_time_2020;
                        }
                    }();
                    for (const string& equipment : equipment) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}

else if (answer_in_answer_in_answer14 == "q"){
    cout <<"Exiting the program..."<< endl;
    return 0;
}
else {
    cout<< "Unknown command. Exiting the program..."<< endl;
    return 0;
}



         
     }
     
     //----------------------------------------------------------------------------------------------------------
          if (answer_in_answer_14 == "5"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
     string answer_in_answer_in_answer14;
     getline (cin, answer_in_answer_in_answer14);
if (answer_in_answer_in_answer14 == "1") {
    cout << "There is a list of products for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[4].factories[0].products[0].name << " " << categories[0].name << endl
         << "2. " << categories[4].factories[0].products[1].name << " " << categories[0].name << endl
         << "3. " << categories[4].factories[0].products[2].name << " " << categories[0].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[4].factories[0].products[0];  
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Equipment for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Equipment for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Equipment for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer14 == "2") {
                int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

    
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[4].factories[0].products[1]; 
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Equipment for year 2021: ";
                    for (const string& equipment : product.equipment_per_time_2021) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Equipment for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Equipment for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    if (answer_in_answer_in_answer_in_answer14 == "3") {
                       int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
      
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Product& product = categories[4].factories[0].products[2]; 
            for (int year = startYear; year <= endYear; ++year) {
                if (year == 2020) {
                    cout << "Equipment for year 2020: ";
                    for (const string& equipment : product.equipment_per_time_2020) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                if (year == 2021) {
                    cout << "Equipment for year 2021: ";
                    for (const string& tester : product.testers_per_time_2021) {
                        cout << tester << ", ";
                    }
                    cout << endl;
                } else if (year == 2022) {
                    cout << "Equipment for year 2022: ";
                    for (const string& equipment : product.equipment_per_time_2022) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                } else if (year == 2023) {
                    cout << "Equipment for year 2023: ";
                    for (const string& equipment : product.equipment_per_time_2023) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
        break;
    }
    
                            else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    } 
    
    
    
}

if (answer_in_answer_in_answer14 == "2") {
    cout << "There is a list of categories for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
         << "1. " << categories[4].name << endl;

    string answer_in_answer_in_answer_in_answer14;
    getline(cin, answer_in_answer_in_answer_in_answer14);
    if (answer_in_answer_in_answer_in_answer14 == "1") {
        int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << endl << "Category " << categories[4].name << ":" << endl << endl;

     
        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
            const Category& selectedCategory = categories[4]; 
            for (const Factory& factory : selectedCategory.factories) {
                for (const Product& product : factory.products) {
                    cout << "Product: " << product.name << endl;
                    for (int year = startYear; year <= endYear; ++year) {
                        cout << "Equipment for year " << year << ": ";
                        const vector<string>& equipment = [&]() {
                            switch (year) {
                                case 2020:
                                    return product.equipment_per_time_2020;
                                case 2021:
                                    return product.equipment_per_time_2021;
                                case 2022:
                                    return product.equipment_per_time_2022;
                                case 2023:
                                    return product.equipment_per_time_2023;
                                default:
                                    return product.equipment_per_time_2020;
                            }
                        }();
                        for (const string& equipment : equipment) {
                            cout << equipment << ", ";
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
            }
        } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
    }
    
                                else if (answer_in_answer_in_answer_in_answer14 == "q"){
        cout<<"Exiting the program..."<<endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    
    break;
}

if (answer_in_answer_in_answer14 == "3") {
    int startYear, endYear;
        cout << "Enter start year: ";
            if (!(cin >> startYear)) {
        cout << "Invalid input for start year. Exiting the program..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }
        if (startYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }
        cout << "Enter end year: ";
        cin >> endYear;
        cin.ignore();
                if (endYear == 'q') {
        cout << "Exiting the program..." << endl;
        return 0;
    }

  
    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
        const Category& selectedCategory = categories[4]; 
        for (const Factory& factory : selectedCategory.factories) {
            for (const Product& product : factory.products) {
                cout << "Product: " << product.name << endl;
                for (int year = startYear; year <= endYear; ++year) {
                    cout << "Equipment for year " << year << ": ";
                    const vector<string>& equipment = [&]() {
                        switch (year) {
                            case 2020:
                                return product.equipment_per_time_2020;
                            case 2021:
                                return product.equipment_per_time_2021;
                            case 2022:
                                return product.equipment_per_time_2022;
                            case 2023:
                                return product.equipment_per_time_2023;
                            default:
                                return product.equipment_per_time_2020;
                        }
                    }();
                    for (const string& equipment : equipment) {
                        cout << equipment << ", ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
    } else {
        cout << "Invalid start and/or end years. Exiting the program..." << endl;
        return 0;
  
    }
     break;
}
         
     }
           
     else if (answer_in_answer_14 == "q"){
         cout<< "Exiting the program..."<< endl;
         return 0;
     } 
     else {
         cout<<"Unknown command. Exiting the program..."<< endl;
         return 0;
     }
           
           
           
       }
                        if (answer_category == "15"){
        string factory_name;
        string answer_in_answer15;
         string answer_in_answer_in_answer15;
        string quit_factory_number;
    while (true) {
        cout <<"You want to know: " << endl << "1. The number of products produced by a separate factory currently" << endl << "2. The number of products produced by a separate area currently" << endl << "3. The number of products produced by a the enterprise as a whole currently " << endl;
        getline(cin, answer_in_answer15);
if (answer_in_answer15 == "1") { cout << "Do you want to also consider the category (yes/no)" << endl;
    string category_or_no;
    getline (cin, category_or_no);
    if (category_or_no == "no"){
    cout << "There is a list of names of our factories, choose one of them (by number) if you want to get the number and name of the products that are made here" << endl << "1. Factory Planes" << endl << "2. Factory Gliders" << endl << "3. Factory Helicopters" << endl << "4. Factory Hang Gliders" << endl << "5. Factory Rockets" << endl;
    string question_numb_of_factory;
    getline(cin, question_numb_of_factory);
    if (question_numb_of_factory == "q") {cout<< "Exiting the program..."<<endl;
        return 0;
    }
    if (question_numb_of_factory == "1" || question_numb_of_factory == "2" || question_numb_of_factory == "3" || question_numb_of_factory == "4" || question_numb_of_factory == "5") {
        int category_index = stoi(question_numb_of_factory) - 1;
        int year_index = 3;  
        int total_amount = 0;
        for (const auto& product : categories[category_index].factories[0].products) {
            total_amount += product.amount_per_time_period[year_index];
        }
        cout << "The number of all the " << categories[category_index].name << " at the " << categories[category_index].factories[0].name << " Factory for present = " << total_amount << endl;
    }
    else {
        cout<<"Unknown command. Exiting the program..."<< endl;
        return 0;
    }
}
if (category_or_no == "yes"){
    cout << "There is a list of names of our factories, choose one of them (by number) if you want to get the number and name of the products that are made here" << endl << "1. Factory Planes" << endl << "2. Factory Gliders" << endl << "3. Factory Helicopterse" << endl << "4. Factory Hang Gliders" << endl << "5. Factory Rockets" << endl;       

string question_numb_of_factory;
getline(cin, question_numb_of_factory);
if (question_numb_of_factory == "q") {cout<< "Exiting the program..."<<endl;
        return 0;
    }
if (question_numb_of_factory == "1" || question_numb_of_factory == "2" || question_numb_of_factory == "3" || question_numb_of_factory == "4" || question_numb_of_factory == "5") {
    int category_index = stoi(question_numb_of_factory) - 1;
    int year_index = 3;
    int total_amount = 0;
    for (const auto& product : categories[category_index].factories[0].products) {
        total_amount += product.amount_per_time_period[year_index];
    }
    cout << "Category: " << categories[category_index].name << endl;
    cout << "The number of all the " << categories[category_index].name << " at the " << categories[category_index].factories[0].name << " Factory for present = " << total_amount << endl;
}
  else {
        cout<<"Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    
    
}
else if (category_or_no == "q") {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
}

if (answer_in_answer15 == "3") {
    cout << "Do you want to display by categories? (yes/no)" << endl;
    string category_or_no;
    getline(cin, category_or_no);

    if (category_or_no == "yes") {
        for (const auto& category : categories) {
            cout << "Category: " << category.name << endl;
            for (const auto& factory : category.factories) {
                int total_amount = 0;
                for (const auto& product : factory.products) {
                    total_amount += product.amount_per_time_period[3];
                }
                cout << "Factory: " << factory.name << endl;
                cout << "The number of all the products at the " << factory.name << " Factory for the present year is: " << total_amount << endl;
            }
            cout << endl;
        }
    } else if (category_or_no == "no") {
        for (const auto& category : categories) {
            for (const auto& factory : category.factories) {
                int total_amount = 0;
                for (const auto& product : factory.products) {
                    total_amount += product.amount_per_time_period[3];
                }
                cout << "Factory: " << factory.name << endl;
                cout << "The number of all the products at the " << factory.name << " Factory for the present year is: " << total_amount << endl;
            }
            cout << endl;
        }
    } else if (category_or_no == "q") {
        cout << "Exiting the program..." << endl;
        return 0;
    }
    else {
        cout<< "Unknown command. Exiting the program..."<< endl;
        return 0;
    }
    
    break;
}
if (answer_in_answer15 == "2") {
    cout << "There is a list of names of our areas. Choose one of them (by number) if you want to get the number and name of the products that are made here:" << endl;
    cout << "1. AftAoCP (Area for the Assembly of Civil Planes)" << endl;
    cout << "2. AftAoTP (Area for the Assembly of Transport Planes)" << endl;
    cout << "3. AftAoMP (Area for the Assembly of Military Planes)" << endl;
    cout << "4. AftAoG (Area for the Assembly of Gliders)" << endl;
    cout << "5. AftAoH (Area for the Assembly of Helicopters)" << endl;
    cout << "6. AftAoHG (Area for the Assembly of Hang Gliders)" << endl;
    cout << "7. AftAoAR (Area for the Assembly of Artillery Rockets)" << endl;
    cout << "8. AftAoNR (Area for the Assembly of Naval Rockets)" << endl;
    cout << "9. AftAoAvR (Area for the Assembly of Aviation Rockets)" << endl;
    
    string question_areas;
    getline(cin, question_areas);
    int area_index;
    try {
        area_index = stoi(question_areas) - 1;
        if (area_index < 0 || area_index >= 9) {
            throw out_of_range("Invalid area number");
        }
    } catch (const invalid_argument& e) {
        cout << "Invalid input for area number. Exiting the program..." << endl;
        return 0;
    } catch (const out_of_range& e) {
        cout << "Invalid area number. Exiting the program..." << endl;
        return 0;
    }
    
    cout << "Display with categories (yes/no)" << endl;
    string category_or_no;
    getline(cin, category_or_no);
    
    int factory_index = 0;
    int product_index = 0;
    
    if (category_or_no == "yes") {
        if (area_index >= 0 && area_index < 3) {
            product_index = area_index;
            cout << "The total number of all " << categories[0].name << " in " << categories[0].name << " category in the selected area nowadays = " << categories[0].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index == 3) {
            product_index = 0;
            cout << "The total number of all " << categories[1].name << " in " << categories[1].name << " category products in the selected area nowadays = " << categories[1].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index == 4) {
            product_index = 0;
            cout << "The total number of all " << categories[2].name << " in " << categories[2].name << " category products in the selected area nowadays = " << categories[2].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index == 5) {
            product_index = 0;
            cout << "The total number of all " << categories[3].name << " in " << categories[3].name << " category products in the selected area nowadays = " << categories[3].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index >= 6 && area_index <= 8) {
            product_index = area_index - 6;
            cout << "The total number of all " << categories[4].name << " in " << categories[4].name << " category products in the selected area nowadays = " << categories[4].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        }
    } else if (category_or_no == "no") {
        if (area_index >= 0 && area_index < 3) {
            product_index = area_index;
            cout << "The total number of all " << categories[0].name << " products in the selected area nowadays = " << categories[0].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index == 3) {
            product_index = 0;
            cout << "The total number of all " << categories[1].name << " products in the selected area nowadays = " << categories[1].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index == 4) {
            product_index = 0;
            cout << "The total number of all " << categories[2].name << " products in the selected area nowadays = " << categories[2].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index == 5) {
            product_index = 0;
            cout << "The total number of all " << categories[3].name << " products in the selected area nowadays = " << categories[3].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        } else if (area_index >= 6 && area_index <= 8) {
            product_index = area_index - 6;
            cout << "The total number of all " << categories[4].name << " products in the selected area nowadays = " << categories[4].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
            return 0;
        }
    } else if (category_or_no == "q") {
        cout << "Exiting the program..." << endl;
        return 0;
    } else {
        cout << "Unknown command. Exiting the program..." << endl;
        return 0;
    }
}
else if (answer_in_answer15 == "q"){
    cout<<"Exiting the program..."<< endl;
    return 0;
}
else {
    cout<< "Unknown command. Exiting the program..."<< endl;
    return 0;
}

}}

          else if (answer_category == "q") {
            break;
        }
 else { cout <<"Unknown command" << endl; 
        
        }   
}}
