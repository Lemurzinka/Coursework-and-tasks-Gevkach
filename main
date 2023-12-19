1.#include <iostream>
2.#include <iomanip>
3.#include <string>
4.#include <vector>
5.#include <regex>
6.#include <limits>
7.#include <cctype>
8.using namespace std;
9.
10.
11.
12.bool isValidDate(const std::string& date) {
13.    std::regex pattern("\\d{4}-\\d{2}-\\d{2}");
14.    
15.    if (!std::regex_match(date, pattern))
16.        return false;
17.    
18.    std::string::size_type delimiterPos = date.find('-');
19.    int year = std::stoi(date.substr(0, delimiterPos));
20.    std::string::size_type nextDelimiterPos = date.find('-', delimiterPos + 1);
21.    int month = std::stoi(date.substr(delimiterPos + 1, nextDelimiterPos - delimiterPos - 1));
22.    int day = std::stoi(date.substr(nextDelimiterPos + 1));
23.    
24.    if (year < 0 || month < 1 || month > 12 || day < 1)
25.        return false;
26.    
27.    int maxDays = 31;
28.    
29.    if (month == 4 || month == 6 || month == 9 || month == 11)
30.        maxDays = 30;
31.    else if (month == 2) {
32.        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
33.            maxDays = 29;
34.        else
35.            maxDays = 28;
36.    }
37.    
38.    if (day > maxDays)
39.        return false;
40.    
41.    return true;
42.}
43.string names_and_positions_Factory_Planes[15][2] = {
44.    {"", ""},
45.    {"John Smith", "Engineer"},
46.    {"Emma Liu", "Engineer"},
47.    {"Nick Xu", "Technician"},
48.    {"Ivy Liu", "Technician"},
49.    {"Patrick Zhang", "Technician"},
50.    {"Jiri Novak", "Collector"},
51.    {"Petr Dvorak", "Collector"},
52.    {"Katerina Krejcova", "Collector"},
53.    {"Veronika Barta", "Collector"},
54.    {"Amandine Leroy", "Turner"},
55.    {"Emilie Laurent", "Turner"},
56.    {"Martin Lepik", "Locksmith"},
57.    {"Priit Raudsepp", "Locksmith"},
58.    {"Fatma Mohamed", "Welder"}
59.};
60.
61.string names_and_positions_Factory_Gliders[12][2] = {
62.    {"", ""},
63.    {"Karen Brown", "Engineer"},
64.    {"Grace Lee", "Technician"},
65.    {"Henry Chen", "Technician"},
66.    {"Oleksandr Bondarenko", "Technologist"},
67.    {"Marketa Prikrylova", "Collector"},
68.    {"Karel Ruzicka", "Collector"},
69.    {"Antoine Dubois", "Turner"},
70.    {"Alexandre Mercier", "Turner"},
71.    {"Kaisa Kaasik", "Locksmith"},
72.    {"Antra Kalnina", "Welder"},
73.    {"Daina Kadike", "Welder"},
74.};
75.string names_and_positions_Factory_Helicopters[12][2] = {
76.    {"", ""}, 
77.    {"Tom Davis", "Engineer"},
78.    {"Sophie Zhang", "Engineer"},
79.    {"Tina Liu", "Technician"},
80.    {"Kateryna Ivanova", "Technologist"},
81.    {"Ivan Petrov", "Technologist"},
82.    {"Hana Kolarova", "Collector"},
83.    {"Martin Blaha", "Collector"},
84.    {"Marie Leclerc", "Turner"},
85.    {"Katriin Lutsar", "Locksmith"},
86.    {"Liis Allik", "Locksmith"},
87.    {"Raimonds Veveris", "Welder"},
88.};
89.string names_and_positions_Factory_Hang_Gliders[6][2] = {
90.{"", ""},
91.{"Alice Johnson", "Engineer"},
92.{"Jitka Buresova", "Collector"},
93.{"Mari-Liis Rebane", "Locksmith"},
94.{"Toomas Tamm", "Locksmith"},
95.{"Laima Jansone", "Welder"},
96.};
97.
98.string names_and_positions_Factory_Rockets[17][2] = {
99.    {"", ""},
100.    {"Veron Barta", "Collector"},
101.    {"Tomas Vlcek", "Collector"},
102.    {"Lukas Kolar", "Collector"},
103.    {"Marie Horakova", "Collector"},
104.    {"Bob Wilson", "Engineer"},
105.    {"Andriy Tkachenko", "Technologist"},
106.    {"Samuel Lee", "Technician"},
107.    {"Amy Johnson", "Technician"},
108.    {"Rachel Wang", "Technician"},
109.    {"Camille Durand", "Turner"},
110.    {"Marie Leclerc", "Turner"},
111.    {"Jaanika Veskis", "Locksmith"},
112.    {"Raul Valt", "Locksmith"},
113.    {"Ieva Ozola", "Welder"},
114.    {"Laima Jansone", "Welder"},
115.    {"Daina Kadike", "Welder"},
116.};
117.
118.struct Employee {
119.    string name_and_surname;
120.    string position;
121.};
122.
123.struct Product {
124.    string name;
125.    string factory;
126.    string area;
127.    vector <string> composition_of_area_brigades;
128.    int amount_per_time_period[4];
129.    string boss_of_the_area;
130.    vector <string> masters_of_the_area;
131.    string date_for_laboratories;
132.    vector <string> testers_per_time_2020;
133.     vector <string> testers_per_time_2021;
134.     vector <string> testers_per_time_2022;
135.     vector <string> testers_per_time_2023;
136.     vector <string> equipment_per_time_2020;
137.     vector <string> equipment_per_time_2021;
138.     vector <string> equipment_per_time_2022;
139.     vector <string> equipment_per_time_2023;
140.    
141.    Product(string n, string f, string a, vector<string> c, int a_2020, int a_2021, int a_2022, int a_2023, string b, vector<string> m, string d, vector <string> t_2020, vector <string> t_2021, vector <string> t_2022, vector <string> t_2023, vector <string> e_2020, vector <string> e_2021, vector <string> e_2022, vector <string> e_2023 ) : name(n), factory(f), area(a), composition_of_area_brigades(c), boss_of_the_area(b), masters_of_the_area(m), date_for_laboratories(d), testers_per_time_2020(t_2020), testers_per_time_2021(t_2021), testers_per_time_2022(t_2022), testers_per_time_2023(t_2023), equipment_per_time_2020(e_2020), equipment_per_time_2021(e_2021), equipment_per_time_2022(e_2022), equipment_per_time_2023(e_2023)  {
142.        amount_per_time_period[0] = a_2020;
143.        amount_per_time_period[1] = a_2021;
144.        amount_per_time_period[2] = a_2022;
145.        amount_per_time_period[3] = a_2023;
146.    }
147.    int getPartsProduced(int year) const {
148.        if (year >= 2020 && year <= 2023) {
149.            return amount_per_time_period[year-2020];
150.        }
151.        else {
152.            return 0;
153.        }
154.    }
155.};
156.struct Engineer {
157.   string  name_and_surname;
158.    string specialization;
159.    string education_level;
160.    bool is_manager;
161.    string programming_language;
162.};
163.struct Technician {
164.    string  name_and_surname;
165.    string equipment_type;
166.    bool certification;
167.    string job_title;
168.    bool is_supervisor;
169.};
170.
171.struct Technologist {
172.    string name_and_surname;
173.    string industry_experience;
174.    string highest_degree_earned;
175.    bool has_license;
176.    string software_proficiency;
177.};
178.
179.struct Collector {
180.    string name_and_surname;
181.bool graduated_from_the_university;
182.string native_language;
183.bool is_able_to_operate_specialized_equipment;
184.int number_of_certifications;
185.};
186.
187.struct Turner {
188.    string name_and_surname;
189.string field_of_study;
190.string originally_from_the_country;
191.bool is_able_to_use_CNC_machines;
192.int number_of_materials_processed;
193.};
194.
195.struct Locksmith {
196.    string name_and_surname;
197.bool completed_certain_courses;
198.bool age_is_more_than_45;
199.bool is_able_to_use_lock_picking_tools;
200.int number_of_security_systems_installed;
201.};
202.
203.struct Welder {
204.string name_and_surname;
205.bool age_is_more_than_35;
206.bool has_the_award_of_the_best_employee;
207.bool is_able_to_use_specialized_welding_techniques;
208.int number_of_materials_welded;
209.};
210.
211.
212.
213.
214.
215.class Factory {
216.public:
217.    string name;
218.    string name_of_laboratory; 
219.    vector<string> works;
220.    vector<string> masters_of_the_factory;
221.    vector<Product> products;
222.};
223.
224.class Category {
225.public:
226.    string name;
227.    vector<Factory> factories;
228.};
229.int main() {
230.string answer_category;
231.Category categories[] = {
232.    {"Planes", {
233.        {"Factory Planes", "Aircraft testing ground", {"Fuselage and wing design", "Development of a flight control system", "Creating an engine", "Manufacture of parts and assembly of the plane", "Tests on the ground and in the air", "Plane quality and safety control"}, {"Nick Xu", "Jiri Novak"},  {Product("Civil", "Factory Planes", "AftAoCP", {"John Smith", "Emma Liu", "Nick Xu", "Ivy Liu",}, 20, 25, 22, 15, "John Smith", {"Emma Liu", "Jiri Novak"}, "2020-02-10",  {"Olivia Powell", "Zachary Henderson", "Ashley Hayes", "Lauren Bryant"}, {"Olivia Powell", "Zachary Henderson", "Emily Johnson", "David Smith"}, {"Olivia Powell", "Jennifer Brown", "Michael Wilson"}, {"Jennifer Brown", "Michael Wilson", "Sarah Taylor"}, {"Load sensors ver.1", "Deformation sensors ver.1", "Accelerometers ver.1", "Pressure sensors ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1",  "Temperature sensors ver.1"}, {"Load sensors ver.1","Deformation sensors ver.2", "Accelerometers ver.1", "Pressure sensors ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1", "Temperature sensors ver.2"}, {"Load sensors ver.2","Deformation sensors ver.3", "Accelerometers ver.1", "Pressure sensors ver.2", "Gyroscopes ver.2", "Parametric recorders ver.1", "Temperature sensors ver.2"}, {"Load sensors ver.1","Deformation sensors ver.2", "Accelerometers ver.1", "Pressure sensors ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1", "Temperature sensors ver.3"}),  Product("Transport", "Factory Planes", "AftAoTP", {"Patrick Zhang", "Jiri Novak", "Petr Dvorak", "Katerina Krejcova", "Veronika Barta"}, 23, 14, 10, 5, "Petr Dvorak" , {"Emma Liu", "Jiri Novak"}, "2021-01-06",  {"Rebecca Wilson", "Andrew Martin", "Laura Clark"}, {"Rebecca Wilson", "Andrew Martin", "Stephanie Moore"}, {"Andrew Martin", "Stephanie Mercier"}, {"Joshua Bennet", "Samantha Cooper"}, {"Load sensors ver.1", "Stretch sensors ver.1", "Deformation sensors ver.1", "Pressure sensors ver.1", "Accelerometers ver.1", "Gyroscopes ver.1", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.1", "Fuel monitoring systems ver.1", "Flight data recording systems ver.1"}, {"Load sensors ver.1", "Stretch sensors ver.2", "Deformation sensors ver.1", "Pressure sensors ver.1", "Accelerometers ver.2", "Gyroscopes ver.1", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.1", "Fuel monitoring systems ver.1", "Flight data recording systems ver.2"}, {"Load sensors ver.1", "Stretch sensors ver.2", "Deformation sensors ver.1", "Pressure sensors ver.1", "Accelerometers ver.2", "Gyroscopes ver.2", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.1", "Fuel monitoring systems ver.2", "Flight data recording systems ver.3" }, {"Load sensors ver.3", "Stretch sensors ver.2", "Deformation sensors ver.1", "Pressure sensors ver.2", "Accelerometers ver.2", "Gyroscopes ver.2", "Parametric recorders ver.1", "Pressure and temperature measurement systems ver.2", "Fuel monitoring systems ver.2", "Flight data recording systems ver.3" }  ),  Product("Military", "Factory Planes", "AftAoMP", {"Amandine Leroy", "Emilie Laurent", "Martin Lepik", "Priit Raudsepp", "Fatma Mohamed"}, 3, 5, 15, 28, "Fatma Mohamed", {"Emilie Laurent", "Priit Raudsepp"}, "2021-05-13", {"Olivia White", "Daniel Lee", "Victoria Turner", "Amanda Scott"}, {"Olivia White", "Daniel Lee", "Victoria Turner", "Amanda Scott"}, {"Ryan Phillips", "Nycole Edwards"}, {"Daniel Lee", "Victoria Turner", "Amanda Scott"}, {"Dynamic pressure settings ver.1", "Test chambers ver.1", "Rocket suspensions ver.1", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.1", "Systems for testing autonomous functions ver.1", "Test stands of electronic communication ver.1", "Radar test systems ver.1"}, {"Dynamic pressure settings ver.1", "Test chambers ver.1", "Rocket suspensions ver.1", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.2", "Systems for testing autonomous functions ver.2", "Test stands of electronic communication ver.2", "Radar test systems ver.1"},  {"Dynamic pressure settings ver.1", "Test chambers ver.1", "Rocket suspensions ver.2", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.3", "Systems for testing autonomous functions ver.2", "Test stands of electronic communication ver.2", "Radar test systems ver.1"},  {"Dynamic pressure settings ver.1", "Test chambers ver.2", "Rocket suspensions ver.2", "Systems of integrated avionic complexes ver.1", "Simulation systems ver.3", "Systems for testing autonomous functions ver.3", "Test stands of electronic communication ver.2", "Radar test systems ver.2"} )},  //Area for the Assembly of Civil/Transport/Military Planes
234.    },
235.}},
236.    {"Gliders", {
237.        {"Factory Gliders", "Gliders testing ground", {"Wing design", "Development of a flight control system", "Manufacture of parts and assembly of the glider", "Tests on the ground and in the air", "Glider quality and safety control"}, {"Antra Kalnina", "Karen Brown"}, {Product("Gliders", "Factory Gliders", "AftAoG", {"Karen Brown", "Grace Lee", "Henry Chen", "Oleksandr Bondarenko", "Marketa Prikrylova", "Karel Ruzicka", "Antoine Dubois", "Alexandre Mercier", "Kaisa Kaasik", "Antra Kalnina", "Daina Kadike"},  5, 5, 3, 1, "Oleksandr Bondarenko", {"Kaisa Kaasik", "Alexandre Mercier"}, "2022-09-13",  {"Moriss Jacob", "Steward Hanna"}, {"Moriss Jacob", "Steward Hanna"}, {"Moriss Jacob", "Steward Hanna"}, {"Kevin Michael", "Steward Hanna"}, {"Strength measuring devices ver.1", "Aerodynamic sensors ver.1", "Wing length and position measurement systems ver.1", "Parametric recorders ver.1", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.1"}, {"Strength measuring devices ver.2", "Aerodynamic sensors ver.1", "Wing length and position measurement systems ver.1", "Parametric recorders ver.2", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.1"}, {"Strength measuring devices ver.3", "Aerodynamic sensors ver.2", "Wing length and position measurement systems ver.1", "Parametric recorders ver.3", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.2"}, {"Strength measuring devices ver.3", "Aerodynamic sensors ver.2", "Wing length and position measurement systems ver.1", "Parametric recorders ver.3", "Pressure and temperature sensors ver.1", "Flight data recording systems ver.3"})},
238.            
239.        },
240.    }},
241.            {"Helicopters", {
242.        {"Factory Helicopters", "Helicopters testing ground", {"Fuselage and wing design", "Development of a flight control system", "Creating a rotor", "Manufacture of parts and assembly of the helicopter", "Tests on the ground and in the air", "Helicopter quality and safety control"}, {"Sophie Zhang", "Tom Davis"},  {Product("Helicopters", "Factory Helicopters", "AftAoH", {"Tom Davis", "Sophie Zhang", "Tina Liu", "Kateryna Ivanova", "Ivan Petrov", "Hana Kolarova", "Martin Blaha", "Marie Leclerc", "Katriin Lutsar", "Liis Allik", "Raimonds Veveris"}, 10, 12, 8, 20, "Hana Kolarova", {"Martin Blaha", "Liis Allik"}, "2021-03-23",  {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Emily Kevin", "Jonathan Cambell", "Amber Nelson"}, {"Altimeter ver.1" "Airspeed indicator ver.1" "Turn and bank indicator ver.1", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.1"}, {"Altimeter ver.1" "Airspeed indicator ver.1" "Turn and bank indicator ver.2", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.2"}, {"Altimeter ver.2" "Airspeed indicator ver.1" "Turn and bank indicator ver.2", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.2"}, {"Altimeter ver.2" "Airspeed indicator ver.1" "Turn and bank indicator ver.2", "Vertical speed indicator ver.1", "Artificial horizon ver.1", "Directional gyro/heading indicator ver.2"} )},
243.    
244.        },
245.        }}, 
246.            {"Hang gliders", {
247.        {"Factory Hang gliders", "Hang gliders testing ground", {"Wing design", "Development of a flight control system", "Manufacture of parts and assembly of the hang glider", "Tests on the ground and in the air", "Hang glider quality and safety control"}, {"Toomas Tamm", "Jitka Buresova"},  {Product("Hang gliders", "Factory Hang gliders", "AftAoHG", {"Alice Johnson", "Jitka Buresova", "Mari-Liis Rebane", "Toomas Tamm", "Laima Jansone"}, 1, 2, 6, 4, "Toomas Tamm", {"Emma Liu", "Jiri Novak"}, "2020-01-23" ,  {"Allison Cook", "Patrick Mirphy"}, {"Megan Ross", "Patrick Mirphy"}, {"Allison Cook", "Megan Ross"}, {"Allison Cook", "Patrick Mirphy", "Megan Ross"},  {"Variometer ver.1", "Altimeter ver.1"}, {"Variometer ver.1", "Altimeter ver.1"}, {"Variometer ver.1", "Altimeter ver.2"}, {"Variometer ver.1", "Altimeter ver.3"}     ) },
248.    
249.            },
250.            }},
251.                {"Rockets", {
252.        {"Factory Rockets", "Rockets testing ground", {"Hull and engine design", "Development of a flight control system", "Manufacture of parts and assembly of the rocket", "Tests on the ground and in the air", "Rocket quality and safety control"}, {"Camille Durand", "Bob Wilson"},  {Product("Artillery", "Factory Rockets", "AftAoAR", {"Veron Barta", "Tomas Vlcek", "Lukas Kolar", "Marie Horakova", "Bob Wilson", "Andriy Tkachenko"}, 70, 40, 200, 300, "Andriy Tkachenko", {"Marie Horakova", "Tomas Vlcek"}, "2020-04-12" ,  {"Eric Powell", "Mellisa Jeniks", "Jennifer Heyes", "Bryan Brant", "Emma Colse"}, {"Jennifer Heyes", "Bryan Brant", "Emma Colse"}, {"Jennifer Heyes", "Bryan Brant", "Emma Colse"}, {"Jennifer Heyes", "Bryan Brant", "Jason Fisher"}, {"Ignition test stands ver.1", "Telemetry systems ver.1", "Measurement and registration systems ver.1", "Inertial navigation systems ver.1", "Remote control systems ver.1", "Communication test stands ver.1"}, {"Ignition test stands ver.2", "Telemetry systems ver.1", "Measurement and registration systems ver.1", "Inertial navigation systems ver.1", "Remote control systems ver.2", "Communication test stands ver.1"}, {"Ignition test stands ver.2", "Telemetry systems ver.2", "Measurement and registration systems ver.1", "Inertial navigation systems ver.1", "Remote control systems ver.2", "Communication test stands ver.1"}, {"Ignition test stands ver.2", "Telemetry systems ver.2", "Measurement and registration systems ver.2", "Inertial navigation systems ver.1", "Remote control systems ver.2", "Communication test stands ver.1"}    ), Product("Naval", "Factory Rockets", "AftAoNR", {"Samuel Lee", "Amy Johnson", "Rachel Wang", "Camille Durand", "Marie Leclerc"}, 100, 120, 90, 300, "Rachel Wang", {"Amy Johnson", "Samuel Lee"}, "2022-05-10" ,  {"Ian Richardson", "Michelle Harrison", "Samuel Gray"}, {"Ian Richardson", "Michelle Harrison", "Samuel Gray", "Rachel Adams"}, {"Ina Richardson", "Michelle Harrison", "Alexandra Sillivan"}, {"Ina Richardson", "Michelle Harrison", "Alexandra Sillivan"},  {"Launch stations ver.1", "Telemetry systems ver.1", "Navigation and orientation sensors ver.1", "Remote control systems ver.1", "Radar systems ver.1", "Communication test systems ver.1"}, {"Launch stations ver.1", "Telemetry systems ver.2", "Navigation and orientation sensors ver.2", "Remote control systems ver.1", "Radar systems ver.1", "Communication test systems ver.1"}, {"Launch stations ver.1", "Telemetry systems ver.2", "Navigation and orientation sensors ver.2", "Remote control systems ver.1", "Radar systems ver.1", "Communication test systems ver.1"},  {"Launch stations ver.1", "Telemetry systems ver.2", "Navigation and orientation sensors ver.3", "Remote control systems ver.2", "Radar systems ver.1", "Communication test systems ver.1"} ), Product("Aviation", "Factory Rockets", "AftAoAvR", {"Jaanika Veskis", "Raul Valt", "Ieva Ozola", "Laima Jansone", "Daina Kadike"}, 40, 50, 90, 150, "Daina Kadike", {"Ieva Ozola", "Jaanika Veskis"}, "2020-04-12" ,  {"Danniel Murray", "Amy Parker", "Jeremy Green"}, {"Danniel Murray", "Amy Parker", "Jeremy Green"}, {"Danniel Murray", "Amy Parker", "Jeremy Green", "Jastyn Perry"}, {"Jastyn Perry", "Katherine Jackson", "Jessica Beiley"} , {"Launch systems ver.1", "Navigation and orientation systems ver.1", "Sensors and measurement systems ver.1", "Data transmission and telemetry systems ver.1" , "Remote control systems ver.1", "Test stands and installations ver. 1"}, {"Launch systems ver.1", "Navigation and orientation systems ver.1", "Sensors and measurement systems ver.2", "Data transmission and telemetry systems ver.2" , "Remote control systems ver.1", "Test stands and installations ver. 1"},  {"Launch systems ver.1", "Navigation and orientation systems ver.2", "Sensors and measurement systems ver.3", "Data transmission and telemetry systems ver.2" , "Remote control systems ver.1", "Test stands and installations ver. 1"},  {"Launch systems ver.1", "Navigation and orientation systems ver.2", "Sensors and measurement systems ver.3", "Data transmission and telemetry systems ver.3" , "Remote control systems ver.1", "Test stands and installations ver.2"} )},
253.                },
254.    }}
255.    
256.    
257.    
258.    
259.};
260.
261.
262.
263.
264.
265.Engineer engineers[10] = {
266.    {"John Smith", "Mechanical Engineering", "Master's Degree", true, "Java"},
267.    {"Alice Johnson", "Electrical Engineering", "Bachelor's Degree", false, "C++"},
268.    {"Bob Wilson", "Civil Engineering", "Bachelor's Degree", false, "Python"},
269.    {"Karen Brown", "Chemical Engineering", "PhD", true, "MATLAB"},
270.    {"Tom Davis", "Software Engineering", "Master's Degree", true, "JavaScript"},
271.    {"Sara Lee", "Aerospace Engineering", "Bachelor's Degree", false, "Python"},
272.    {"Mike Chen", "Industrial Engineering", "Master's Degree", true, "R"},
273.    {"Emma Liu", "Materials Engineering", "PhD", false, "Python"},
274.    {"Kevin Wang", "Environmental Engineering", "Bachelor's Degree", false, "Python"},
275.    {"Sophie Zhang", "Biomedical Engineering", "Master's Degree", true, "MATLAB"}
276.};
277.
278.Technician technicians[20] = {{"Jack Smith", "Laboratory equipment", true, "Lab technician", false},
279.{"Amy Johnson", "Electronics equipment", true, "Electronics technician", true},
280. {"David Wilson", "Automotive equipment", false, "Automotive technician", false},
281. {"Emily Brown", "Medical equipment", true, "Medical equipment technician", true},
282. {"Frank Davis", "Industrial equipment", false, "Industrial equipment technician", false},
283. {"Grace Lee", "Telecommunications equipment", true, "Telecommunications technician", true},
284. {"Henry Chen", "Laboratory equipment", false, "Lab technician", false},
285. {"Ivy Liu", "Electronics equipment", true, "Electronics technician", true},
286. {"John Wang", "Medical equipment", false, "Medical equipment technician", false},
287. {"Kate Zhang", "Automotive equipment", true, "Automotive technician", true},
288. {"Lucas Chen", "Industrial equipment", false, "Industrial equipment technician", false},
289. {"Mia Li", "Telecommunications equipment", true, "Telecommunications technician", true},
290. {"Nick Xu", "Laboratory equipment", true, "Lab technician", false},
291. {"Olivia Chen", "Electronics equipment", true, "Electronics technician", true},
292. {"Patrick Zhang", "Automotive equipment", false, "Automotive technician", false},
293. {"Rachel Wang", "Medical equipment", true, "Medical equipment technician", true},
294. {"Samuel Lee", "Industrial equipment", false, "Industrial equipment technician", false},
295. {"Tina Liu", "Telecommunications equipment", true, "Telecommunications technician", true},
296. {"Victor Chen", "Laboratory equipment", false, "Lab technician", false},
297. {"Wendy Wang", "Electronics equipment", true, "Electronics technician", true} 
298.};
299.
300.Technologist technologists[5] = {{"Ivan Petrov", "Chemical Industry", "Master's Degree", true, "MATLAB"},
301. {"Andriy Tkachenko", "Automotive Industry", "Bachelor's Degree", true, "C++"},
302.    {"Maria Kovalenko", "IT Industry", "Bachelor's Degree", false, "Python"},
303.    {"Oleksandr Bondarenko", "Pharmaceutical Industry", "Master's Degree", true, "R"},
304.    {"Kateryna Ivanova", "Construction Industry", "Bachelor's Degree", false, "Java"}
305.};
306.
307.Collector collectors[25] = {
308.{"Jan Novotny", true, "Czech", true, 2},
309.{"Marie Horakova", true, "Czech", false, 0},
310.{"Jiri Novak", false, "Czech", false, 1},
311.{"Lenka Prochazkova", true, "Czech", true, 3},
312.{"Petr Dvorak", true, "English", true, 2},
313.{"Martina Mareckova", true, "Czech", false, 0},
314.{"Tomas Vlcek", true, "Czech", true, 1},
315.{"Alena Svobodova", true, "Czech", false, 0},
316.{"Lukas Kolar", true, "Czech", true, 2},
317.{"Tereza Novakova", true, "Czech", true, 1},
318.{"Pavel Konecny", true, "Czech", true, 3},
319.{"Hana Kolarova", true, "English", true, 1},
320.{"Jakub Horak", true, "Czech", true, 2},
321.{"Jana Vojtova", true, "Czech", false, 0},
322.{"Josef Pospisil", true, "Czech", false, 1},
323.{"Veronika Barta", false, "Czech", false, 0},
324.{"Karel Ruzicka", false, "English", true, 1},
325.{"Eva Stepanova", true, "Czech", true, 2},
326.{"Marek Novacek", true, "Czech", true, 4},
327.{"Jitka Buresova", true, "Czech", false, 1},
328.{"David Havel", true, "Czech", true, 3},
329.{"Marketa Prikrylova", true, "Czech", true, 2},
330.{"Martin Blaha", true, "Czech", false, 1},
331.{"Katerina Krejcova", true, "English", true, 2},
332.{"Ondrej Vacek", false, "Czech", false, 0}
333.};
334.Turner turners[15] = {
335.{"Pierre Dupont", "Mechanical Engineering", "United States", true, 1000},
336.{"Celine Martin", "Industrial Engineering", "Canada", false, 500},
337.{"Antoine Dubois", "Metallurgical Engineering", "United Kingdom", true, 800},
338.{"Emilie Laurent", "Materials Science", "Australia", true, 1200},
339.{"Lucas Moreau", "Mechanical Engineering", "United States", false, 600},
340.{"Marie Leclerc", "Mechatronics", "South Korea", true, 900},
341.{"Nicolas Rousseau", "Mechanical Engineering", "China", true, 1500},
342.{"Julie Bertrand", "Mechanical Engineering", "China", false, 400},
343.{"Philippe Gautier", "Mechanical Engineering", "China", true, 1100},
344.{"Amandine Leroy", "Mechanical Engineering", "China", false, 300},
345.{"Jeanne Dubois", "Mechanical Engineering", "Czech Republic", true, 1300},
346.{"Alexandre Mercier", "Mechanical Engineering", "Czech Republic", false, 700},
347.{"Mathieu Laurent", "Mechanical Engineering", "Czech Republic", true, 1400},
348.{"Olivier Girard", "Mechanical Engineering", "Czech Republic", true, 900},
349.{"Camille Durand", "Mechanical Engineering", "Czech Republic", false, 500}
350.};
351.Locksmith locksmiths[15] = {
352.{"Toomas Tamm", true, false, true, 90},
353.{"Mari-Liis Rebane", false, false, false, 50},
354.{"Jaanika Veskis", false, false, true, 80},
355.{"Tanel Kangurt", false, false, false, 120},
356.{"Kaisa Kaasik", false, true, false, 60},
357.{"Martin Lepik", true, false, true, 90},
358.{"Kristjan Kallas", true, false, true, 150},
359.{"Epp Mihkelson", true, false, false, 40},
360.{"Peeter Laasik", false, true, true, 110},
361.{"Katriin Lutsar", false, true, true, 30},
362.{"Raul Valt", false, true, true, 130},
363.{"Liis Allik", true, true, false, 30},
364.{"Taavi Paas", true, false, true, 20},
365.{"Kadri Jaatma", true, false, false, 25},
366.{"Priit Raudsepp", true, false, true, 32}
367.};
368.  
369.Welder welders[20] = {
370.    {"Andris Berzins", true, false, true, 100},
371.    {"Ieva Ozola", false, true, false, 50},
372.    {"Juris Pētersons", true, true, true, 500},
373.    {"Liga Ziberga", true, false, true, 200},
374.    {"Janis Vilks", false, true, false, 75},
375.    {"Maija Liepa", true, true, true, 1000},
376.    {"Kaspars Abolins", true, false, true, 150},
377.    {"Inese Briede", false, true, false, 25},
378.    {"Raimonds Veveris", true, true, true, 800},
379.    {"Anda Dzerve", true, false, true, 400},
380.    {"Gints Berzs", false, true, false, 50},
381.    {"Elina Bluma", true, true, true, 900},
382.    {"Uldis Grinbergs", true, false, true, 300},
383.    {"Antra Kalnina", false, true, false, 75},
384.    {"Artis Zvirgzdins", true, true, true, 1200},
385.    {"Edgars Strautmanis", true, false, true, 250},
386.    {"Laima Jansone", false, true, false, 100},
387.    {"Jazeps Ozols", true, true, true, 700},
388.    {"Daina Kadike", true, false, true, 150},
389.    {"Fatma Mohamed", false, true, false, 50}
390.};
391.    Employee employees_in_Factory_planes[15];
392.    for (int i = 1; i <= 14; i++) {
393.        employees_in_Factory_planes[i].name_and_surname = names_and_positions_Factory_Planes[i][0];
394.        employees_in_Factory_planes[i].position = names_and_positions_Factory_Planes[i][1];
395.    }
396.
397.    Employee employees_in_Factory_gliders[12];
398.    for (int i = 1; i <= 11; i++) {
399.        employees_in_Factory_gliders[i].name_and_surname = names_and_positions_Factory_Gliders[i][0];
400.        employees_in_Factory_gliders[i].position = names_and_positions_Factory_Gliders[i][1];
401.    }
402.
403.    Employee employees_in_Factory_helicopters[12];
404.    for (int i = 1; i <= 11; i++) {
405.        employees_in_Factory_helicopters[i].name_and_surname = names_and_positions_Factory_Helicopters[i][0];
406.        employees_in_Factory_helicopters[i].position = names_and_positions_Factory_Helicopters[i][1];
407.    }
408.
409.
410.    Employee employees_in_Factory_hang_gliders[6];
411.    for (int i = 1; i <= 5; i++) {
412.        employees_in_Factory_hang_gliders[i].name_and_surname = names_and_positions_Factory_Hang_Gliders[i][0];
413.        employees_in_Factory_hang_gliders[i].position = names_and_positions_Factory_Hang_Gliders[i][1];
414.    }
415.    Employee employees_in_Factory_rockets[17];
416.    for (int i = 1; i <= 16; i++) {
417.        employees_in_Factory_rockets[i].name_and_surname = names_and_positions_Factory_Rockets[i][0];
418.        employees_in_Factory_rockets[i].position = names_and_positions_Factory_Rockets[i][1];
419.    }
420.
421.
422.
423.
424.
425.while (true) {
426.    
427.cout << "Choose an option (1-15) or q to quit:" << endl
428.     << "1. View list of products by category and period for all environments" << endl
429.     << "2. View list of products by category and period for a specific factory" << endl
430.     << "3. View list of products by category and period for a specific area" << endl
431.     << "4. Get personnel data for the factory or enterprise by specified categories" << endl
432.     << "5. Get the number and list of plots for a specified factory or enterprise" << endl
433.     << "6. Get list of works undergone by a specified product" << endl
434.     << "7. Get the composition of teams for a specified area or factory" << endl
435.     << "8. Get list of masters for a specified area or factory" << endl
436.     << "9. Get list of products of a specific category currently being assembled in a specified area, factory, or enterprise" << endl
437.     << "10. Get the composition of teams participating in the assembly of a specified product" << endl
438.     << "11. Get list of participating testing laboratories for a specific product" << endl
439.     << "12. Get list of products tested in a specified laboratory within a certain period" << endl
440.     << "13. Get list of testers participating in trials of a specified product in a specific laboratory within a certain period" << endl
441.     << "14. Get composition of equipment used in testing a specified product in a specific laboratory within a certain period" << endl
442.     << "15. Get the number and list of products by category currently being assembled in a specified workshop, site, or enterprise" << endl;
443.    getline(cin, answer_category);
444.    if (answer_category == "1") {
445.        cout << "Do you want to see the products by any category? (yes/no) ";
446.        string question_category_or_skip;
447.        getline(cin, question_category_or_skip);
448.       while (question_category_or_skip != "yes" && question_category_or_skip != "no" && question_category_or_skip != "q") {
449.    cout << "Invalid input. Please enter 'yes', 'no', or 'q': ";
450.    getline(cin, question_category_or_skip);
451.}
452.
453.            if (question_category_or_skip == "yes") {
454.                cout << "Do you want to know the number of parts produced for each product in any year? (yes/no): " << endl;
455.                string quesion_in_category_or_skip;
456.                getline (cin, quesion_in_category_or_skip);
457.                if (quesion_in_category_or_skip == "yes"){
458.int year;
459.int category_index;
460.
461.cout << "Enter the number of a category to view its products: ";
462.cin >> category_index;
463.
464.
465.if (cin.fail()) {
466.    cin.clear();
467.    cin.ignore(numeric_limits<streamsize>::max(), '\n');
468.    cout << "Invalid input for category index. Please enter a valid integer next time" << endl;
469.    return 1; 
470.}
471.
472.
473.cout << "Enter a year to view the number of parts produced for each product: ";
474.cin >> year;
475.
476.
477.if (cin.fail()) {
478.    cin.clear();
479.    cin.ignore(numeric_limits<streamsize>::max(), '\n');
480.    cout << "Invalid input for year. Please enter a valid integer next time" << endl;
481.    return 1; 
482.}
483.}
484.else if (quesion_in_category_or_skip == "no"){
485.        int category_index;
486.    cout << "Enter the number of a category to view its products: ";
487.    cin >> category_index;
488.    getline(cin, answer_category);
489.    for (int i = 0; i < sizeof(categories) / sizeof(categories[0]); i++) {
490.           cout << "Products in the " << categories[category_index-1].name << " category:" << endl;
491.        for (int j = 0; j < categories[category_index-1].factories.size(); j++) {
492.            for (int k = 0; k < categories[category_index-1].factories[j].products.size(); k++) {
493.                cout << categories[category_index-1].factories[j].products[k].name << endl;
494.            }
495.           
496.        }
497.       break;
498.    }
499.    
500.    
501.
502.}
503.
504.else {
505.    cout << "Unknown command. Exiting..."<< endl; 
506.}
507.
508.
509.}
510.else if (question_category_or_skip == "no"){
511.      cout << "Do you want to know the number of parts produced for each product in any year? (yes/no): " << endl;
512.                
513.                string quesion_in_category_or_skip;
514.                getline (cin, quesion_in_category_or_skip);
515.                if (quesion_in_category_or_skip == "no"){
516.            cout << "The list of all the products:\n";
517.    for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); i++) {
518.        for (int j = 0; j < categories[i].factories.size(); j++) {
519.            for (int k = 0; k < categories[i].factories[j].products.size(); k++) {
520.                cout << "Category: " << categories[i].name << ", Product: " << categories[i].factories[j].products[k].name << ", Factory: " << categories[i].factories[j].products[k].factory << endl;
521.            }
522.        }
523.    }}
524.    else if (quesion_in_category_or_skip =="yes"){
525.cout << "Enter the year for which you want to see the number of parts produced: ";
526.int year_period;
527.cin >> year_period;
528.cout << "The list of all the products produced in " << year_period << ":\n";
529.
530.for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); i++) {
531.    for (int j = 0; j < categories[i].factories.size(); j++) {
532.        for (int k = 0; k < categories[i].factories[j].products.size(); k++) {
533.            int total_amount = categories[i].factories[j].products[k].getPartsProduced(year_period);
534.            if (total_amount > 0) {
535.                cout << "Category: " << categories[i].name << ", Product: " << categories[i].factories[j].products[k].name << ", Factory: " << categories[i].factories[j].products[k].factory << ", Parts produced in " << year_period << ": " << total_amount << endl;
536.            }
537.        }
538.    }
539.}
540.    
541.}
542.else {cout<< "Unknown command. Exiting..."<< endl;
543.    break;
544.}
545.}
546.else if (question_category_or_skip == "q"){
547.    cout << "Exiting the program..." << endl;
548.    break;
549.}
550.        
551.    }
552.                else if (answer_category == "2"){
553.        string factory_name;
554.        string question_factory_numbers_or_list;
555.        string quit_factory_number;
556.    while (true) {
557.        cout <<"You want to know: " << endl << "1. The number of products produced by a separate factory during a certain period of time" << endl << "2. See the list of products by any factory" << endl;
558.        getline(cin, question_factory_numbers_or_list);
559.if (question_factory_numbers_or_list == "1") {
560.    cout << "There is a list of our factories, choose one of them (by number):" << endl;
561.    for (int i = 0; i < 5; i++) {
562.        cout << i + 1 << ". " << categories[i].factories[0].name << endl;
563.    }
564.
565.    string question_numb_of_factory;
566.    getline(cin, question_numb_of_factory);
567.
568.    if (question_numb_of_factory == "q") {
569.        cout << "Exiting the program..." << endl;
570.        return 0;
571.    }
572.
573.    if (question_numb_of_factory == "1" || question_numb_of_factory == "2" || question_numb_of_factory == "3" || question_numb_of_factory == "4" || question_numb_of_factory == "5") {
574.        int category_index = stoi(question_numb_of_factory) - 1;
575.        cout << "You can choose one of these years 2020/2021/2022/2023" << endl;
576.        string year_answer;
577.        getline(cin, year_answer);
578.        int year_index = stoi(year_answer) - 2020;
579.        int total_amount = 0;
580.        for (const auto& product : categories[category_index].factories[0].products) {
581.            total_amount += product.amount_per_time_period[year_index];
582.        }
583.        cout << "The number of all the " << categories[category_index].name << " at the " << categories[category_index].factories[0].name << " Factory for " << year_answer << " = " << total_amount << endl;
584.    }
585.    else {cout << "Unknown command. Exiting..." << endl;
586.        return 0;
587.    }
588.    
589.}
590.
591.        if (question_factory_numbers_or_list == "2") 
592.        {     cout << "There is a list of our factories:" << endl;
593.    for (int i = 0; i < 5; i++) {
594.        cout << i+1 << ". " << categories[i].factories[0].name << endl;
595.    }
596.            cout << "Enter factory name to see its products (or 'q' to quit): ";
597.        getline(cin, factory_name);
598.        if (factory_name == "q") {
599.            cout<< "Exiting the program..."<< endl;
600.            
601.            return 0;}
602.
603.        bool found = false;
604.        for (int i = 0; i < sizeof(categories)/sizeof(categories[0]); i++) {
605.            for (int j = 0; j < categories[i].factories.size(); j++) {
606.                if (categories[i].factories[j].name == factory_name) {
607.                    found = true;
608.                    cout << "Factory " << factory_name << " produces the following products in the " << categories[i].name << " category:\n";
609.                    for (int k = 0; k < categories[i].factories[j].products.size(); k++) {
610.                        cout << "- " << categories[i].factories[j].products[k].name << endl;
611.                    }
612.                    break;
613.                }
614.            }
615.            if (found) break;
616.        }
617.           if (!found) {
618.        cout << "Factory " << factory_name << " not found. Exiting the program..." << endl;
619.        return 0;
620.    }
621.
622.    }
623.    else if (question_factory_numbers_or_list == "q"){
624.        cout << "Exiting the program..."<< endl;
625.        return 0;
626.    } 
627.    else { cout << "Unknown command. Exiting..." << endl;
628.    return 0;} 
629.                }
630.}
631.
632.
633.
634.
635.        else if (answer_category == "3"){
636.            cout << "There is list of names of our areas, chose one of them (by number) if you want to get the number and name of the products that are made here" << endl << "1. AftAoCP (Area for the Assembly of Civil Planes)" << endl << "2. AftAoTP (Area for the Assembly of Transport Planes)" << endl << "3. AftAoMP  (Area for the Assembly of Military Planes)" << endl << "4. AftAoG (Area for the Assembly of Gliders" << endl << "5. AftAoH (Area for the Assembly of Helicopters" << endl << "6. AftAoHG (Area for the Assembly of Hang Gliders " << endl << "7. AftAoAR (Area for the Assembly of Artillery Rockets" << endl << "8. AftAoNR (Area for the Assembly of Naval Rockets" << endl << "9. AftAoAvR (Area for the Assembly on Aviation Rockets" << endl;                                    
637.        string question_areas;
638.        getline(cin, question_areas);
639.         if (question_areas == "q") {
640.             cout << "Exiting the program..."<< endl;
641.             
642.             
643.             break;}
644. if (question_areas == "1" || question_areas == "2" || question_areas == "3" || question_areas == "4" || question_areas == "5" || question_areas == "6" || question_areas == "7" || question_areas == "8" || question_areas == "9") {
645.    int category_index = stoi(question_areas) - 1;
646.    cout << "You can choose one of these years: 2020/2021/2022/2023" << endl;
647.    string year_answer;
648.    getline(cin, year_answer);
649.    int year_index = stoi(year_answer) - 2020;
650.    int total_amount = 0;
651.    for (const auto& factory : categories[category_index].factories) {
652.        for (const auto& product : factory.products) {
653.            if (product.area == "AftAoCP" || product.area == "AftAoTP" || product.area == "AftAoMP" || product.area == "AftAoG" || product.area == "AftAoH" || product.area == "AftAoHG" || product.area == "AftAoAR" || product.area == "AftAoNR" || product.area == "AftAoAvR") {
654.                total_amount += product.amount_per_time_period[year_index];
655.            }
656.        }
657.    }
658.    cout << "The total number of all " << categories[category_index].name << " products in the selected area for " << year_answer << " = " << total_amount << endl;
659.}
660.else {cout << "Unknown command. Exiting..."<< endl;
661.    return 0;
662.}
663.
664.         
665.          }
666.
667.else if (answer_category =="4"){
668.         cout << "What do you want (to be more precise) 1/2/3 ?" <<endl << "1. Get data on the staffing of the enterprise as a whole" << endl << "2. Get data on the staff of the factory" << endl << "3. Get data on personnel composition the specified categories" << endl;
669.         string answer_in_answer_4;
670.         getline (cin, answer_in_answer_4);
671.if (answer_in_answer_4 == "1") {
672.        cout << "Technologists:\n";
673.for (int i = 0; i < sizeof(technologists)/sizeof(technologists[0]); i++) {
674.    cout << i+1 << ". " << technologists[i].name_and_surname << endl;
675.}
676.
677.    cout << "Technicians:\n";
678.for (int i = 0; i < sizeof(technicians)/sizeof(technicians[0]); i++) {
679.    cout << i+1 << ". " << technicians[i].name_and_surname << endl;
680.}
681.
682.    cout << "Engineers:\n";
683.for (int i = 0; i < sizeof(engineers)/sizeof(engineers[0]); i++) {
684.    cout << i+1 << ". " << engineers[i].name_and_surname << endl;
685.}
686.
687.    cout << "Collectors:\n";
688.for (int i = 0; i < sizeof(collectors)/sizeof(collectors[0]); i++) {
689.    cout << i+1 << ". " << collectors[i].name_and_surname << endl;
690.}
691.
692.    cout << "Turners:\n";
693.for (int i = 0; i < sizeof(turners)/sizeof(turners[0]); i++) {
694.    cout << i+1 << ". " << turners[i].name_and_surname << endl;
695.}
696.
697.    cout << "Locksmiths:\n";
698. for (int i = 0; i < sizeof(locksmiths)/sizeof(locksmiths[0]); i++) {
699.    cout << i+1 << ". " << locksmiths[i].name_and_surname << endl;
700.}
701.     cout << "Welders:\n";
702. for (int i = 0; i < sizeof(welders)/sizeof(welders[0]); i++) {
703.    cout << i+1 << ". " << welders[i].name_and_surname << endl;
704.}    
705.}
706.    if (answer_in_answer_4 == "2"){
707.        string factories[] = {"Factory Planes", "Factory Gliders", "Factory Helicopters", "Factory Hang Gliders", "Factory Rockets"};
708.int max_employees[] = {14, 11, 11, 5, 16};
709.
710.cout << "Choose the factory from which you want to see workers:" << endl;
711.
712.for (int i = 0; i < 5; i++) {
713.    cout << i + 1 << ". " << factories[i] << endl;
714.}
715.
716.string answer_in_answer_in_answer4;
717.getline(cin, answer_in_answer_in_answer4);
718.if (answer_in_answer_in_answer4.empty()) {
719.    cout << "Invalid input. Exiting the program..." << endl;
720.    return 0;
721.}
722.
723.for (char c : answer_in_answer_in_answer4) {
724.    if (!isdigit(c)) {
725.        cout << "Invalid input. Exiting the program..." << endl;
726.        return 0;
727.    }
728.}
729.
730.int factory_index = stoi(answer_in_answer_in_answer4) - 1;
731.
732.if (factory_index >= 0 && factory_index < 5) {
733.    for (int i = 1; i <= max_employees[factory_index]; i++) {
734.        switch (factory_index) {
735.            case 0:
736.                cout << employees_in_Factory_planes[i].name_and_surname << " - " << employees_in_Factory_planes[i].position << endl;
737.                break;
738.            case 1:
739.                cout << employees_in_Factory_gliders[i].name_and_surname << " - " << employees_in_Factory_gliders[i].position << endl;
740.                break;
741.            case 2:
742.                cout << employees_in_Factory_helicopters[i].name_and_surname << " - " << employees_in_Factory_helicopters[i].position << endl;
743.                break;
744.            case 3:
745.                cout << employees_in_Factory_hang_gliders[i].name_and_surname << " - " << employees_in_Factory_hang_gliders[i].position << endl;
746.                break;
747.            case 4:
748.                cout << employees_in_Factory_rockets[i].name_and_surname << " - " << employees_in_Factory_rockets[i].position << endl;
749.                break;
750.            default:
751.                break;
752.        }
753.    }
754.} else {
755.    cout << "Invalid input. Exiting the program..." << endl;
756.    return 0;
757.    
758.}
759.    
760.        
761.        }
762.        if (answer_in_answer_4 == "3"){ 
763.            cout<< "Choose the category:" << endl <<"1. Technologists " << endl << "2. Technicians " << endl << "3. Engineers" << endl << "4. Collectors" << endl << "5. Turners" << endl << "6. locksmiths" <<endl << "7. Welders"<< endl;
764.            
765.string answer_in_answer_in_answer4;
766.getline(cin, answer_in_answer_in_answer4);
767.if (answer_in_answer_in_answer4 == "1"){
768.        cout << "Technologists of our company:\n";
769.for (int i = 0; i < sizeof(technologists)/sizeof(technologists[0]); i++) {
770.    cout << i+1 << ". " << technologists[i].name_and_surname << endl;
771.}
772.    
773.}
774.  if (answer_in_answer_in_answer4 == "2"){
775.    cout << "Technicians of our company:\n";
776.for (int i = 0; i < sizeof(technicians)/sizeof(technicians[0]); i++) {
777.    cout << i+1 << ". " << technicians[i].name_and_surname << endl;
778.}}
779.if (answer_in_answer_in_answer4 == "3"){
780.    cout << "Engineers of our company:\n";
781.for (int i = 0; i < sizeof(engineers)/sizeof(engineers[0]); i++) {
782.    cout << i+1 << ". " << engineers[i].name_and_surname << endl;
783.}}
784.if (answer_in_answer_in_answer4 == "4"){
785.    cout << "Collectors of our company:\n";
786.for (int i = 0; i < sizeof(collectors)/sizeof(collectors[0]); i++) {
787.    cout << i+1 << ". " << collectors[i].name_and_surname << endl;
788.}}
789.if (answer_in_answer_in_answer4 == "5"){
790.    cout << "Turners of our company:\n";
791.for (int i = 0; i < sizeof(turners)/sizeof(turners[0]); i++) {
792.    cout << i+1 << ". " << turners[i].name_and_surname << endl;
793.}}
794.if (answer_in_answer_in_answer4 == "6"){
795.    cout << "Locksmiths of our company:\n";
796. for (int i = 0; i < sizeof(locksmiths)/sizeof(locksmiths[0]); i++) {
797.    cout << i+1 << ". " << locksmiths[i].name_and_surname << endl;
798.}}
799.if (answer_in_answer_in_answer4 == "7"){
800.     cout << "Welders of our company:\n";
801. for (int i = 0; i < sizeof(welders)/sizeof(welders[0]); i++) {
802.    cout << i+1 << ". " << welders[i].name_and_surname << endl;
803.}}
804.else if (answer_in_answer_in_answer4 == "q"){
805.    cout << "Exiting the program..." << endl;
806.}
807.else {
808.    cout << "Unknown command, please correct your typo next time" << endl;
809.    return 0;
810.    
811.}
812.            
813.        }
814.                if (answer_in_answer_4 == "q"){
815.            cout<< "Exiting the program..."<< endl;
816.            return 0;
817.        }
818.        else {cout << "Unknown command. Exiting..."<< endl;
819.            return 0;
820.        }
821.
822.        
823.}
824.else if (answer_category == "5"){
825.   cout << "Get the number and list of areas  ...  and their bosses" << endl << "1. of the specified factory" << endl << "2. for all the company" << endl;
826.   string answer_in_answer_5;
827.   getline (cin, answer_in_answer_5);
828.if (answer_in_answer_5 == "1"){
829.cout << "There is a list of our factories, choose one of them (by number):" << endl;
830.for (int i = 0; i < 5; i++) {
831.cout << i+1 << ". " << categories[i].factories[0].name << endl;
832.}
833.
834.
835.string answer_in_answer_in_answer5;
836.getline (cin, answer_in_answer_in_answer5);
837.
838.int factoryIndex = stoi(answer_in_answer_in_answer5) - 1;
839.auto& factory = categories[factoryIndex].factories[0];
840.
841.cout << "Areas in " << factory.name << ":" << endl;
842.int areaCount = 0;
843.for (const auto& product : factory.products) {
844.    cout << "- " << product.area << " (Boss: " << product.boss_of_the_area << ")" << endl;
845.    areaCount++;
846.}
847.cout << "Total Areas: " << areaCount << endl;
848.}
849.else if (answer_in_answer_5 == "2"){
850.int totalAreaCount = 0;
851.for (int i = 0; i < 5; i++) {
852.    auto& factory = categories[i].factories[0];
853.    cout << i+1 << ". " << factory.name << ":" << endl;
854.    for (const auto& product : factory.products) {
855.        cout << "- " << product.area << " (Boss: " << product.boss_of_the_area << ")" << endl;
856.        totalAreaCount++;
857.    }
858.}
859.cout << "Total Areas: " << totalAreaCount << endl;
860.
861.   
862.}
863.else if (answer_in_answer_5 == "q"){
864.    cout <<  "Exiting the program..."<< endl;
865.    return 0;
866.}
867.else {
868.    cout << "Unknown command... Exiting" << endl;
869.    return 0;
870.}
871.}
872.else if (answer_category == "6"){
873.cout << "There is a list of works that the specified product undergoes" << endl;
874.cout << "For " << categories[0].name << " (" << categories[0].factories[0].products[0].name << ", " << categories[0].factories[0].products[1].name << ", " << categories[0].factories[0].products[2].name << "):" << endl;
875.for (int i = 0; i < 6; i++) {
876.    cout << i + 1 << ". " << categories[0].factories[0].works[i] << endl;
877.}
878.cout << "For " << categories[1].name << " (" << categories[1].factories[0].products[0].name << "):" << endl;
879.for (int i = 0; i < 5; i++) {
880.    cout << i + 1 << ". " << categories[1].factories[0].works[i] << endl;
881.}
882.cout << "For " << categories[2].name << " (" << categories[2].factories[0].products[0].name << "):" << endl;
883.for (int i = 0; i < 6; i++) {
884.    cout << i + 1 << ". " << categories[2].factories[0].works[i] << endl;
885.}
886.cout << "For " << categories[3].name << " (" << categories[3].factories[0].products[0].name << "):" << endl;
887.for (int i = 0; i < 5; i++) {
888.    cout << i + 1 << ". " << categories[3].factories[0].works[i] << endl;
889.}
890.cout << "For " << categories[4].name << " (" << categories[4].factories[0].products[0].name << ", " << categories[4].factories[0].products[1].name << ", " << categories[4].factories[0].products[2].name << "):" << endl;
891.for (int i = 0; i < 5; i++) {
892.    cout << i + 1 << ". " << categories[4].factories[0].works[i] << endl;
893.}
894.    
895.}
896.
897.else if (answer_category == "7"){
898.    cout<< "You want to get the composition of the teams for the..." << endl << "1. Specified area" << endl << "2. Specified factory" << endl;
899.    string answer_in_answer_7;
900.    getline (cin, answer_in_answer_7);
901.    if (answer_in_answer_7 == "1"){
902.         cout << "There is list of names of our areas, chose one of them (by number)" << endl << "1. " <<categories[0].factories[0].products[0].area << endl << "2. " << categories[0].factories[0].products[1].area << endl << "3. "<< categories[0].factories[0].products[2].area << endl << "4. "<< categories[1].factories[0].products[0].area << endl << "5. "<< categories[2].factories[0].products[0].area << endl << "6. "<< categories[3].factories[0].products[0].area << endl << "7. " <<categories[4].factories[0].products[0].area << endl << "8. "<< categories[4].factories[0].products[1].area << endl << "9. " << categories[4].factories[0].products[2].area << endl;   
903. string answer_in_answer_in_answer7;
904.getline (cin, answer_in_answer_in_answer7);
905.if (answer_in_answer_in_answer7 == "1") {
906.    Product product = categories[0].factories[0].products[0];
907.    cout << "The composition of the teams for the " << product.area << ":" << endl;
908.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
909.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
910.    }
911.}
912.else if (answer_in_answer_in_answer7 == "2") {
913.    Product product = categories[0].factories[0].products[1];
914.    cout << "The composition of the teams for the " << product.area << ":" << endl;
915.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
916.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
917.    }
918.}
919.else if (answer_in_answer_in_answer7 == "3") {
920.    Product product = categories[0].factories[0].products[2];
921.    cout << "The composition of the teams for the " << product.area << ":" << endl;
922.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
923.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
924.    }
925.}
926. else if (answer_in_answer_in_answer7 == "4") {
927.    Product product = categories[1].factories[0].products[0];
928.    cout << "The composition of the teams for the " << product.area << ":" << endl;
929.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
930.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
931.    }
932.}
933.else if (answer_in_answer_in_answer7 == "5") {
934.    Product product = categories[2].factories[0].products[0];
935.    cout << "The composition of the teams for the " << product.area << ":" << endl;
936.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
937.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
938.    }
939.}
940.   else if (answer_in_answer_in_answer7 == "6") {
941.    Product product = categories[3].factories[0].products[0];
942.    cout << "The composition of the teams for the " << product.area << ":" << endl;
943.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
944.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
945.    }
946.}
947.    else if (answer_in_answer_in_answer7 == "7") {
948.    Product product = categories[4].factories[0].products[0];
949.    cout << "The composition of the teams for the " << product.area << ":" << endl;
950.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
951.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
952.    }
953.}
954.     else if (answer_in_answer_in_answer7 == "8") {
955.    Product product = categories[4].factories[0].products[1];
956.    cout << "The composition of the teams for the " << product.area << ":" << endl;
957.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
958.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
959.    }
960.}
961.       else if (answer_in_answer_in_answer7 == "9") {
962.    Product product = categories[4].factories[0].products[2];
963.    cout << "The composition of the teams for the " << product.area << ":" << endl;
964.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
965.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
966.    }
967.}
968.     else if (answer_in_answer_in_answer7 == "q"){
969.         cout << "Exiting the program..." << endl;
970.         return 0;
971.     }
972.     else {cout << "Unknown command. Exiting..." << endl;
973.         return 0;
974.     }
975.    }
976.if (answer_in_answer_7 == "2") {
977.    cout << "There is a list of our factories, choose one of them (by number):" << endl;
978.    for (int i = 0; i < 5; i++) {
979.        cout << i+1 << ". " << categories[i].factories[0].name << endl;
980.    }
981.    string answer_in_answer_in_answer7;
982.    getline (cin, answer_in_answer_in_answer7);
983.
984.    int category_index = answer_in_answer_in_answer7[0] - '1';
985.    int factory_index = 0;
986.
987.    switch(answer_in_answer_in_answer7[0]) {
988.        case '1':
989.            for (int i = 0; i < 3; i++) {
990.                cout << "Team composition for area " << categories[category_index].factories[factory_index].products[i].area << ":" << endl;
991.                for (int j = 0; j < categories[category_index].factories[factory_index].products[i].composition_of_area_brigades.size(); j++) {
992.                    cout << j+1 << ". " << categories[category_index].factories[factory_index].products[i].composition_of_area_brigades[j] << endl;
993.                }
994.            }
995.            return 0 ;
996.        case '2':
997.            cout << "Team composition for area " << categories[category_index].factories[factory_index].products[0].area << ":" << endl;
998.            for (int j = 0; j < categories[category_index].factories[factory_index].products[0].composition_of_area_brigades.size(); j++) {
999.                cout << j+1 << ". " << categories[category_index].factories[factory_index].products[0].composition_of_area_brigades[j] << endl;
1000.            }
1001.            return 0;
1002.        case '3':
1003.            cout << "The composition of the teams for the " << categories[category_index].factories[factory_index].products[0].area << ":" << endl;
1004.            for (int i = 0; i < categories[category_index].factories[factory_index].products[0].composition_of_area_brigades.size(); i++) {
1005.                cout << i+1 << ". " << categories[category_index].factories[factory_index].products[0].composition_of_area_brigades[i] << endl;
1006.            }
1007.            return 0;
1008.        case '4':
1009.            cout << "The composition of the teams for the " << categories[category_index].factories[factory_index].products[0].area << ":" << endl;
1010.            for (int i = 0; i < categories[category_index].factories[factory_index].products[0].composition_of_area_brigades.size(); i++) {
1011.                cout << i+1 << ". " << categories[category_index].factories[factory_index].products[0].composition_of_area_brigades[i] << endl;
1012.            }
1013.            return 0;
1014.            case'5':
1015.            for (int i = 0; i < 3; i++) {
1016.                cout << "Team composition for area " << categories[category_index].factories[factory_index].products[i].area << ":" << endl;
1017.                for (int j = 0; j < categories[category_index].factories[factory_index].products[i].composition_of_area_brigades.size(); j++) {
1018.                    cout << j+1 << ". " << categories[category_index].factories[factory_index].products[i].composition_of_area_brigades[j] << endl;
1019.                }
1020.                return 0;
1021.            }
1022.            case'q':
1023.            cout << "Exiting the program..."<< endl;
1024.            return 0;
1025.            default:
1026.            cout << "Invalid input. Exiting the program..." << endl;
1027.            return 0;
1028.
1029.    
1030.}    
1031.}
1032.else if (answer_in_answer_7 == "q"){
1033.    cout << "Exiting the program..." << endl;
1034.    return 0;
1035.}
1036.else { cout << "Unknown command. Exiting the program..." << endl;
1037.    return 0;
1038.}
1039.
1040.
1041.      
1042.  
1043.}
1044.else if (answer_category == "8"){
1045.    cout << "What dou you want?" << endl << "1. Get a list of masters of the specified area" << endl << "2. Get a list of masters of the specified factory" << endl;
1046.    string answer_in_answer_8;
1047.    getline (cin, answer_in_answer_8);
1048.    if (answer_in_answer_8 == "1"){
1049.         cout << "There is list of names of our areas, chose one of them (by number)" << endl << "1. " <<categories[0].factories[0].products[0].area << endl << "2. " << categories[0].factories[0].products[1].area << endl << "3. "<< categories[0].factories[0].products[2].area << endl << "4. "<< categories[1].factories[0].products[0].area << endl << "5. "<< categories[2].factories[0].products[0].area << endl << "6. "<< categories[3].factories[0].products[0].area << endl << "7. " <<categories[4].factories[0].products[0].area << endl << "8. "<< categories[4].factories[0].products[1].area << endl << "9. " << categories[4].factories[0].products[2].area << endl;   
1050.
1051.string answer_in_answer_in_answer8;
1052.getline (cin, answer_in_answer_in_answer8);
1053.if (answer_in_answer_in_answer8 == "1"){
1054.    cout << "The list of masters of " << categories[0].factories[0].products[0].area << ":"<< endl << "1. " << categories[0].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[0].factories[0].products[0].masters_of_the_area[1]<<endl;
1055.    
1056.}
1057.if (answer_in_answer_in_answer8 == "2"){
1058.    cout << "The list of masters of " << categories[0].factories[0].products[1].area << ":"<< endl << "1. " << categories[0].factories[0].products[1].masters_of_the_area[0]<<endl << "2. " << categories[0].factories[0].products[1].masters_of_the_area[1]<<endl;
1059.    
1060.}
1061.if (answer_in_answer_in_answer8 == "3"){
1062.    cout << "The list of masters of " << categories[0].factories[0].products[2].area << ":"<< endl << "1. " << categories[0].factories[0].products[2].masters_of_the_area[0]<<endl << "2. " << categories[0].factories[0].products[2].masters_of_the_area[1]<<endl;
1063.    
1064.}
1065.if (answer_in_answer_in_answer8 == "4"){
1066.    cout << "The list of masters of " << categories[1].factories[0].products[0].area << ":"<< endl << "1. " << categories[1].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[1].factories[0].products[0].masters_of_the_area[1]<<endl;
1067.    
1068.}
1069.if (answer_in_answer_in_answer8 == "5"){
1070.    cout << "The list of masters of " << categories[2].factories[0].products[0].area << ":"<< endl << "1. " << categories[2].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[2].factories[0].products[0].masters_of_the_area[1]<<endl;
1071.    
1072.}
1073.if (answer_in_answer_in_answer8 == "6"){
1074.    cout << "The list of masters of " << categories[3].factories[0].products[0].area << ":"<< endl << "1. " << categories[3].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[3].factories[0].products[0].masters_of_the_area[1]<<endl;
1075.    
1076.}
1077.if (answer_in_answer_in_answer8 == "7"){
1078.    cout << "The list of masters of " << categories[4].factories[0].products[0].area << ":"<< endl << "1. " << categories[4].factories[0].products[0].masters_of_the_area[0]<<endl << "2. " << categories[4].factories[0].products[0].masters_of_the_area[1]<<endl;
1079.    
1080.}
1081.if (answer_in_answer_in_answer8 == "8"){
1082.    cout << "The list of masters of " << categories[0].factories[0].products[1].area << ":"<< endl << "1. " << categories[4].factories[0].products[1].masters_of_the_area[0]<<endl << "2. " << categories[4].factories[0].products[1].masters_of_the_area[1]<<endl;
1083.    
1084.}
1085.if (answer_in_answer_in_answer8 == "9"){
1086.    cout << "The list of masters of " << categories[0].factories[0].products[2].area << ":"<< endl << "1. " << categories[4].factories[0].products[2].masters_of_the_area[0]<<endl << "2. " << categories[4].factories[0].products[2].masters_of_the_area[1]<<endl;
1087.    
1088.}
1089.if (answer_in_answer_in_answer8 == "q"){
1090.    cout << "Exiting the program..."<< endl;
1091.    return 0;
1092.}
1093.else {cout << "Unknown command. Exiting..."<< endl;
1094.return 0;
1095.    
1096.}
1097.        
1098.    }
1099.if (answer_in_answer_8 == "2") {
1100.    cout << "There is a list of our factories, choose one of them (by number):" << endl;
1101.    for (int i = 0; i < 5; i++) {
1102.        cout << i+1 << ". " << categories[i].factories[0].name << endl;
1103.    }
1104.    string answer_in_answer_in_answer8;
1105.    getline(cin, answer_in_answer_in_answer8);
1106.
1107.    if (answer_in_answer_in_answer8 == "q") {
1108.        cout << "Exiting the program..." << endl;
1109.        return 0;
1110.    }
1111.
1112.    int factory_index = stoi(answer_in_answer_in_answer8) - 1;
1113.    if (factory_index >= 0 && factory_index < 5) {
1114.        cout << "The list of masters of " << categories[factory_index].factories[0].name << ":" << endl;
1115.        for (int j = 0; j < categories[factory_index].factories[0].masters_of_the_factory.size(); j++) {
1116.            cout << j+1 << ". " << categories[factory_index].factories[0].masters_of_the_factory[j] << endl;
1117.        }
1118.    }
1119.    else {
1120.        cout << "Invalid input. Exiting..." << endl;
1121.        return 0;
1122.    }
1123.}
1124.
1125.else if (answer_in_answer_8 == "q"){
1126.    cout << "Exiting the program..." << endl;
1127.    return 0;
1128.}
1129.else {cout << "Unknown command. Exiting..." << endl;
1130.    return 0;
1131.}
1132.}
1133.else if (answer_category == "9"){
1134.        cout << "What dou you want?" << endl << "1. Get a list of products of a separate category which are collected..." << endl << "2. Get a list of products in general which are collected" << endl;
1135.    string answer_in_answer_9;
1136.    getline (cin, answer_in_answer_9);
1137.    if (answer_in_answer_9 == "1"){
1138.        cout << "1. By area" << endl << "2. By factory" << endl << "3. By enterprise"<< endl;
1139.     string answer_in_answer_in_answer9;
1140.    getline (cin, answer_in_answer_in_answer9);
1141.if (answer_in_answer_in_answer9 == "1") {
1142.string areas[9];
1143.string names[9];
1144.
1145.int index = 0;
1146.for (int i = 0; i < 5; i++) {
1147.    for (int j = 0; j < categories[i].factories[0].products.size(); j++) {
1148.        areas[index] = categories[i].factories[0].products[j].area;
1149.        if (i == 0) {
1150.            names[index] = categories[i].factories[0].products[j].name + " " + categories[i].name;
1151.        } else if (i == 4) {
1152.            names[index] = categories[i].factories[0].products[j].name + " " + categories[i].name;
1153.        } else {
1154.            names[index] = categories[i].factories[0].products[j].name;
1155.        }
1156.        index++;
1157.    }
1158.}
1159.
1160.cout << "There is list of names of our areas, choose one of them (by number):" << endl;
1161.for (int i = 0; i < 9; i++) {
1162.    cout << i+1 << ". " << areas[i] << endl;
1163.}
1164.
1165.string answer;
1166.getline(cin, answer);
1167.int chosenIndex = stoi(answer) - 1;
1168.
1169.cout << "Category - " << categories[chosenIndex / 3].name << endl;
1170.cout << "Area - " << areas[chosenIndex] << endl;
1171.cout << "Products - " << names[chosenIndex] << endl;
1172.}
1173.if (answer_in_answer_in_answer9 == "2"){
1174.        cout << "There is a list of our factories, choose one of them (by number):" << endl;
1175.    for (int i = 0; i < 5; i++) {
1176.        cout << i+1 << ". " << categories[i].factories[0].name << endl;
1177.    }
1178.    string answer_in_answer_in_answer_in_answer9;
1179.    getline (cin, answer_in_answer_in_answer_in_answer9);
1180.   
1181.int answer_num = stoi(answer_in_answer_in_answer_in_answer9);
1182.switch (answer_num) {
1183.    case 1:
1184.        cout << "Category - " << categories[0].name << endl << "Factory - "<< categories[0].factories[0].name << endl << "Products: " << endl << "1. " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl << "2. "<<categories[0].factories[0].products[1].name + " " + categories[0].name << endl << "3. "<<categories[0].factories[0].products[2].name + " " + categories[0].name << endl;
1185.        break;
1186.    case 2:
1187.        cout << "Category - " << categories[1].name << endl << "Factory - "<< categories[1].factories[0].name << endl << "Products - " << categories[1].factories[0].products[0].name << endl;
1188.        break;
1189.    case 3:
1190.        cout << "Category - " << categories[2].name << endl << "Factory - "<< categories[2].factories[0].name << endl << "Products - " << categories[2].factories[0].products[0].name << endl;
1191.        break;
1192.    case 4:
1193.        cout << "Category - " << categories[3].name << endl << "Factory - "<< categories[3].factories[0].name << endl << "Products - " << categories[3].factories[0].products[0].name << endl;
1194.        break;
1195.    case 5:
1196.        cout << "Category - " << categories[4].name << endl << "Factory - "<< categories[4].factories[0].name << endl << "Products: " << endl << "1. "<< categories[4].factories[0].products[0].name + " " + categories[4].name << endl <<"2. "<< categories[4].factories[0].products[1].name + " " + categories[4].name << endl <<"3. "<< categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
1197.        break;
1198.        case 'q':
1199.        cout << "Exiting the program..."<< endl;
1200.        return 0;
1201.    default:
1202.        cout << "Invalid input. Exiting the program..." << endl;
1203.        return 0;
1204.}
1205.
1206.
1207.}
1208.if (answer_in_answer_in_answer9 == "3"){
1209.cout << "A list of products of all the company:" << endl;
1210.cout << "Category - " << categories[0].name << endl << "Products: " << endl;
1211.cout << "1. " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl;
1212.cout << "2. " << categories[0].factories[0].products[1].name + " " + categories[0].name << endl;
1213.cout << "3. " << categories[0].factories[0].products[2].name + " " + categories[0].name << endl << endl;
1214.cout << "Category - " << categories[1].name << endl << "Products - " << categories[1].factories[0].products[0].name << endl << endl;
1215.cout << "Category - " << categories[2].name  << endl << "Products - " << categories[2].factories[0].products[0].name << endl << endl;
1216.cout << "Category - " << categories[3].name << endl<< "Products - " << categories[3].factories[0].products[0].name << endl << endl;
1217.cout << "Category - " << categories[4].name << endl <<"Products: " << endl;
1218.cout << "1. "<< categories[4].factories[0].products[0].name + " " + categories[4].name << endl;
1219.cout << "2. " <<categories[4].factories[0].products[1].name + " " + categories[4].name << endl;
1220.cout << "3. "<<categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
1221.
1222.}
1223.
1224.   if (answer_in_answer_in_answer9 == "q"){
1225.       cout << "Exiting the program..."<< endl;
1226.       return 0;
1227.   } 
1228.   else {
1229.       cout << "Unknown command. Exiting the program..."<< endl;
1230.       return 0;
1231.   }
1232.        
1233.    }
1234.    if (answer_in_answer_9 == "2"){
1235.              cout << "1. By area" << endl << "2. By factory" << endl << "3. By enterprise"<< endl;
1236.     string answer_in_answer_in_answer9;
1237.    getline (cin, answer_in_answer_in_answer9);
1238.if (answer_in_answer_in_answer9 == "1") {
1239.    string areas[] = {
1240.        categories[0].factories[0].products[0].area,
1241.        categories[0].factories[0].products[1].area,
1242.        categories[0].factories[0].products[2].area,
1243.        categories[1].factories[0].products[0].area,
1244.        categories[2].factories[0].products[0].area,
1245.        categories[3].factories[0].products[0].area,
1246.        categories[4].factories[0].products[0].area,
1247.        categories[4].factories[0].products[1].area,
1248.        categories[4].factories[0].products[2].area
1249.    };
1250.    string names[] = {
1251.        categories[0].factories[0].products[0].name + " " + categories[0].name,
1252.        categories[0].factories[0].products[1].name + " " + categories[0].name,
1253.        categories[0].factories[0].products[2].name + " " + categories[0].name,
1254.        categories[1].factories[0].products[0].name,
1255.        categories[2].factories[0].products[0].name,
1256.        categories[3].factories[0].products[0].name,
1257.        categories[4].factories[0].products[0].name + " " + categories[4].name,
1258.        categories[4].factories[0].products[1].name + " " + categories[4].name,
1259.        categories[4].factories[0].products[2].name + " " + categories[4].name
1260.    };
1261.    cout << "There is list of names of our areas, choose one of them (by number):" << endl;
1262.    for (int i = 0; i < 9; i++) {
1263.        cout << i+1 << ". " << areas[i] << endl;
1264.    }
1265.    string answer;
1266.    getline(cin, answer);
1267.    int index = stoi(answer) - 1;
1268.    cout << "Area - " << areas[index] << endl;
1269.    cout << "Products - " << names[index] << endl;
1270.}
1271.if (answer_in_answer_in_answer9 == "2"){
1272.        cout << "There is a list of our factories, choose one of them (by number):" << endl;
1273.    for (int i = 0; i < 5; i++) {
1274.        cout << i+1 << ". " << categories[i].factories[0].name << endl;
1275.    }
1276.    string answer_in_answer_in_answer_in_answer9;
1277.    getline (cin, answer_in_answer_in_answer_in_answer9);
1278.int answer = std::stoi(answer_in_answer_in_answer_in_answer9);
1279.
1280.switch (answer) {
1281.    case 1:
1282.        cout << "Factory - "<< categories[0].factories[0].name << endl << "Products: " << endl << "1. " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl << "2. "<<categories[0].factories[0].products[1].name + " " + categories[0].name << endl << "3. "<<categories[0].factories[0].products[2].name + " " + categories[0].name << endl;
1283.        break;
1284.    case 2:
1285.        cout << "Factory - "<< categories[1].factories[0].name << endl << "Products - " << categories[1].factories[0].products[0].name << endl;
1286.        break;
1287.    case 3:
1288.        cout << "Factory - "<< categories[2].factories[0].name << endl << "Products - " << categories[2].factories[0].products[0].name << endl;
1289.        break;
1290.    case 4:
1291.        cout << "Factory - "<< categories[3].factories[0].name << endl << "Products - " << categories[3].factories[0].products[0].name << endl;
1292.        break;
1293.    case 5:
1294.        cout << "Factory - "<< categories[4].factories[0].name << endl << "Products: " << endl << "1. "<< categories[4].factories[0].products[0].name + " " + categories[4].name << endl <<"2. "<< categories[4].factories[0].products[1].name + " " + categories[4].name << endl <<"3. "<< categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
1295.        break;
1296.        case 'q':
1297.        cout << "Exiting the program..." << endl;
1298.        return 0;
1299.    default:
1300.        cout << "Invalid input. Exiting the program..." << endl;
1301.        return 0;
1302.}
1303.
1304.
1305.}
1306.if (answer_in_answer_in_answer9 == "3"){
1307.cout << "A list of products of all the company:" << endl;
1308.for (int i = 0; i < 3; i++) {
1309.    cout << i+1 << ". " << categories[0].factories[0].products[i].name + " " + categories[0].name << endl;
1310.}
1311.cout << "4. "<< categories[1].factories[0].products[0].name << endl;
1312.cout << "5. " << categories[2].factories[0].products[0].name << endl;
1313.cout << "6. " << categories[3].factories[0].products[0].name << endl;
1314.for (int i = 0; i < 3; i++) {
1315.    cout << i+7 << ". " << categories[4].factories[0].products[i].name + " " + categories[4].name << endl;
1316.}
1317.
1318.
1319.}  
1320.else if (answer_in_answer_in_answer9 == "q") {
1321.    cout << "Exiting the program..." << endl;
1322.    return 0;
1323.}
1324.else {
1325.    cout << "Unknown command. Exiting the program ..."<< endl;
1326.    return 0;
1327.}
1328.
1329.        
1330.    }
1331.        else if (answer_in_answer_9 == "q"){
1332.        cout << "Exiting the program"<< endl;
1333.        return 0;
1334.    } 
1335.    else {
1336.        cout<< "Unknown command. Exiting the program..."<< endl;
1337.        return 0;
1338.    }
1339.   
1340.    
1341.}
1342.    else if (answer_category == "10"){
1343.        cout << "Choose a product (by number):" << endl;
1344.        for (int i = 0; i < 3; i++) {
1345.    cout << i+1 << ". " << categories[0].factories[0].products[i].name + " " + categories[0].name << endl;
1346.}
1347.cout << "4. "<< categories[1].factories[0].products[0].name << endl;
1348.cout << "5. " << categories[2].factories[0].products[0].name << endl;
1349.cout << "6. " << categories[3].factories[0].products[0].name << endl;
1350.for (int i = 0; i < 3; i++) {
1351.    cout << i+7 << ". " << categories[4].factories[0].products[i].name + " " + categories[4].name << endl;
1352.}
1353.string answer_in_answer_10;
1354.getline (cin, answer_in_answer_10);
1355.if (answer_in_answer_10 == "1") {
1356.    Product product = categories[0].factories[0].products[0];
1357.    cout << "The composition of the brigades participating in the assembly of " << categories[0].factories[0].products[0].name + " " + categories[0].name << endl;
1358.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1359.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1360.    }
1361.}
1362.else if (answer_in_answer_10 == "2") {
1363.    Product product = categories[0].factories[0].products[1];
1364.    cout << "The composition of the brigades participating in the assembly of " << categories[0].factories[0].products[1].name + " " + categories[0].name << endl;
1365.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1366.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1367.    }
1368.}
1369.else if (answer_in_answer_10 == "3") {
1370.    Product product = categories[0].factories[0].products[2];
1371.   cout << "The composition of the brigades participating in the assembly of " << categories[0].factories[0].products[2].name + " " + categories[0].name << endl;
1372.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1373.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1374.    }
1375.}
1376. else if (answer_in_answer_10 == "4") {
1377.    Product product = categories[1].factories[0].products[0];
1378.    cout << "The composition of the brigades participating in the assembly of " << categories[1].factories[0].products[0].name  << endl;
1379.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1380.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1381.    }
1382.}
1383.else if (answer_in_answer_10 == "5") {
1384.    Product product = categories[2].factories[0].products[0];
1385.   cout << "The composition of the brigades participating in the assembly of " << categories[2].factories[0].products[0].name  << endl;
1386.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1387.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1388.    }
1389.}
1390.   else if (answer_in_answer_10 == "6") {
1391.    Product product = categories[3].factories[0].products[0];
1392.   cout << "The composition of the brigades participating in the assembly of " << categories[3].factories[0].products[0].name  << endl;
1393.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1394.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1395.    }
1396.}
1397.    else if (answer_in_answer_10 == "7") {
1398.    Product product = categories[4].factories[0].products[0];
1399.    cout << "The composition of the brigades participating in the assembly of " << categories[4].factories[0].products[0].name  + " " + categories[4].name << endl;
1400.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1401.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1402.    }
1403.}
1404.     else if (answer_in_answer_10 == "8") {
1405.    Product product = categories[4].factories[0].products[1];
1406.    cout << "The composition of the brigades participating in the assembly of " << categories[4].factories[0].products[1].name + " " + categories[4].name << endl;
1407.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1408.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1409.    }
1410.}
1411.       else if (answer_in_answer_10 == "9") {
1412.    Product product = categories[4].factories[0].products[2];
1413.       cout << "The composition of the brigades participating in the assembly of " << categories[4].factories[0].products[2].name + " " + categories[4].name << endl;
1414.    for (int i = 0; i < product.composition_of_area_brigades.size(); i++) {
1415.        cout << i + 1 << ". " << product.composition_of_area_brigades[i] << endl;
1416.    }
1417.}
1418.else if (answer_in_answer_10 == "q"){
1419.    cout << "Exiting the program..."<< endl;
1420.    return 0;
1421.}
1422.else {
1423.    cout <<"Unknown command. Exiting the program..."<< endl;
1424.    return 0;
1425.}
1426.    }
1427.    
1428.    
1429.    else if (answer_category == "11"){
1430.         cout << "Choose a product (by number):" << endl;
1431.        for (int i = 0; i < 3; i++) {
1432.    cout << i+1 << ". " << categories[0].factories[0].products[i].name + " " + categories[0].name << endl;
1433.}
1434.cout << "4. "<< categories[1].factories[0].products[0].name << endl;
1435.cout << "5. " << categories[2].factories[0].products[0].name << endl;
1436.cout << "6. " << categories[3].factories[0].products[0].name << endl;
1437.for (int i = 0; i < 3; i++) {
1438.    cout << i+7 << ". " << categories[4].factories[0].products[i].name + " " + categories[4].name << endl;
1439.}
1440.string answer_in_answer_11; 
1441.getline (cin, answer_in_answer_11);
1442.int answer = std::stoi(answer_in_answer_11);
1443.switch (answer) {
1444.    case 1:
1445.        cout << "Laboratory, which tests " << categories[0].factories[0].products[0].name + " " + categories[0].name << " — " << categories[0].factories[0].name_of_laboratory << endl;
1446.        break;
1447.    case 2:
1448.        cout << "Laboratory, which tests " <<  categories[0].factories[0].products[1].name + " " + categories[0].name << " — " << categories[0].factories[0].name_of_laboratory << endl;
1449.        break;
1450.    case 3:
1451.        cout << "Laboratory, which tests " <<  categories[0].factories[0].products[2].name + " " + categories[0].name << " — " << categories[0].factories[0].name_of_laboratory << endl;
1452.        break;
1453.    case 4:
1454.        cout << "Laboratory, which tests " <<  categories[1].factories[0].products[0].name  << " — " << categories[1].factories[0].name_of_laboratory << endl;
1455.        break;
1456.    case 5:
1457.        cout << "Laboratory, which tests " <<  categories[2].factories[0].products[0].name << " — " << categories[2].factories[0].name_of_laboratory << endl;
1458.        break;
1459.    case 6:
1460.        cout << "Laboratory, which tests " <<  categories[3].factories[0].products[0].name << " — " << categories[3].factories[0].name_of_laboratory << endl;
1461.        break;
1462.    case 7:
1463.        cout << "Laboratory, which tests " <<  categories[4].factories[0].products[0].name + " " + categories[4].name << " — " << categories[4].factories[0].name_of_laboratory << endl;
1464.        break;
1465.    case 8:
1466.        cout << "Laboratory, which tests " <<  categories[4].factories[0].products[1].name + " " + categories[4].name << " — " << categories[4].factories[0].name_of_laboratory << endl;
1467.        break;
1468.    case 9:
1469.        cout << "Laboratory, which tests " <<  categories[4].factories[0].products[2].name + " " + categories[4].name << " — " << categories[4].factories[0].name_of_laboratory << endl;
1470.        break;
1471.        case 'q':
1472.        cout << "Exiting the program..."<< endl;
1473.        return 0;
1474.        default:
1475.        cout << "Invalid input. Exiting the program..." << endl;
1476.        return 0;
1477.}
1478.        
1479.        
1480.    }
1481.    else if (answer_category == "12"){
1482.        cout << "1. Get a list of products of a separate category" << endl << "2. Get a list of products in general"  << endl; 
1483.        string answer_in_answer_12;
1484.        getline (cin, answer_in_answer_12);
1485.        if (answer_in_answer_12 == "2"){
1486.cout << "This is a list of laboratories, select one" << endl << "1. "<< categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " <<categories[2].factories[0].name_of_laboratory << endl << "4. " <<   categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl ; 
1487.        string answer_in_answer_in_answer12;
1488.        getline (cin, answer_in_answer_in_answer12);
1489.    if (answer_in_answer_in_answer12 == "1") {
1490.        string start_date;
1491.        string end_date;
1492.
1493.        cout << "Enter start date (YYYY-MM-DD): ";
1494.        cin >> start_date;
1495.
1496.        cout << "Enter end date (YYYY-MM-DD): ";
1497.        cin >> end_date;
1498.
1499.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1500.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1501.            return 0;
1502.        }
1503.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[0].factories[0].name_of_laboratory << " (Planes):" << endl;
1504.
1505.        bool found_product = false;
1506.
1507.        for (const auto& category : categories) {
1508.            if (category.name == "Planes") {
1509.                for (const auto& factory : category.factories) {
1510.                    for (const auto& product : factory.products) {
1511.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1512.                            cout << product.name << endl;
1513.                            found_product = true;
1514.                        }
1515.                    }
1516.                }
1517.            }
1518.        }
1519.
1520.        if (!found_product) {
1521.            cout << "No products found within the specified period, Exiting the program..." << endl;
1522.            return 0;
1523.        }
1524.    }
1525.    if (answer_in_answer_in_answer12 == "2") {
1526.        string start_date;
1527.        string end_date;
1528.
1529.        cout << "Enter start date (YYYY-MM-DD): ";
1530.        cin >> start_date;
1531.
1532.        cout << "Enter end date (YYYY-MM-DD): ";
1533.        cin >> end_date;
1534.
1535.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1536.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1537.            return 0;
1538.        }
1539.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[1].factories[0].name_of_laboratory << endl;
1540.
1541.        bool found_product = false;
1542.
1543.        for (const auto& category : categories) {
1544.            if (category.name == "Gliders") {
1545.                for (const auto& factory : category.factories) {
1546.                    for (const auto& product : factory.products) {
1547.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1548.                            cout << product.name << endl;
1549.                            found_product = true;
1550.                        }
1551.                    }
1552.                }
1553.            }
1554.        }
1555.
1556.        if (!found_product) {
1557.  cout << "No products found within the specified period, Exiting the program..." << endl;
1558.            return 0;        }
1559.    }
1560.    if (answer_in_answer_in_answer12 == "3") {
1561.        string start_date;
1562.        string end_date;
1563.
1564.        cout << "Enter start date (YYYY-MM-DD): ";
1565.        cin >> start_date;
1566.
1567.        cout << "Enter end date (YYYY-MM-DD): ";
1568.        cin >> end_date;
1569.
1570.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1571.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1572.            return 0;
1573.        }
1574.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[2].factories[0].name_of_laboratory << endl;
1575.
1576.        bool found_product = false;
1577.
1578.        for (const auto& category : categories) {
1579.            if (category.name == "Helicopters") {
1580.                for (const auto& factory : category.factories) {
1581.                    for (const auto& product : factory.products) {
1582.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1583.                            cout << product.name << endl;
1584.                            found_product = true;
1585.                        }
1586.                    }
1587.                }
1588.            }
1589.        }
1590.
1591.        if (!found_product) {
1592.  cout << "No products found within the specified period, Exiting the program..." << endl;
1593.            return 0;        }
1594.    }
1595.    if (answer_in_answer_in_answer12 == "4") {
1596.        string start_date;
1597.        string end_date;
1598.
1599.        cout << "Enter start date (YYYY-MM-DD): ";
1600.        cin >> start_date;
1601.
1602.        cout << "Enter end date (YYYY-MM-DD): ";
1603.        cin >> end_date;
1604.
1605.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1606.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1607.            return 0;
1608.        }
1609.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[3].factories[0].name_of_laboratory << endl;
1610.
1611.        bool found_product = false;
1612.
1613.        for (const auto& category : categories) {
1614.            if (category.name == "Hang gliders") {
1615.                for (const auto& factory : category.factories) {
1616.                    for (const auto& product : factory.products) {
1617.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1618.                            cout << product.name << endl;
1619.                            found_product = true;
1620.                        }
1621.                    }
1622.                }
1623.            }
1624.        }
1625.
1626.        if (!found_product) {
1627.  cout << "No products found within the specified period, Exiting the program..." << endl;
1628.            return 0;        }
1629.    }
1630.    if (answer_in_answer_in_answer12 == "5") {
1631.        string start_date;
1632.        string end_date;
1633.
1634.        cout << "Enter start date (YYYY-MM-DD): ";
1635.        cin >> start_date;
1636.
1637.        cout << "Enter end date (YYYY-MM-DD): ";
1638.        cin >> end_date;
1639.
1640.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1641.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1642.            return 0;
1643.        }
1644.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[4].factories[0].name_of_laboratory << " (Rockets): " << endl;
1645.
1646.        bool found_product = false;
1647.
1648.        for (const auto& category : categories) {
1649.            if (category.name == "Rockets") {
1650.                for (const auto& factory : category.factories) {
1651.                    for (const auto& product : factory.products) {
1652.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1653.                            cout << product.name << endl;
1654.                            found_product = true;
1655.                        }
1656.                    }
1657.                }
1658.            }
1659.        }
1660.
1661.        if (!found_product) {
1662.  cout << "No products found within the specified period, Exiting the program..." << endl;
1663.            return 0;        }
1664.    }
1665.    else if (answer_in_answer_in_answer12 == "q"){
1666.        cout<<"Exiting the program..."<<endl;
1667.        return 0;
1668.    }
1669.    else {
1670.       cout << "Unknown command. Exiting the program..."<< endl;
1671.        return 0;
1672.    }
1673.        
1674.        
1675.    }
1676.    else if (answer_in_answer_12 == "1"){
1677.        cout << "This is a list of laboratories, select one" << endl << "1. "<< categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " <<categories[2].factories[0].name_of_laboratory << endl << "4. " <<   categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl ; 
1678.               string answer_in_answer_in_answer12;
1679.        getline (cin, answer_in_answer_in_answer12);
1680.    if (answer_in_answer_in_answer12 == "1") {
1681.        string start_date;
1682.        string end_date;
1683.
1684.        cout << "Enter start date (YYYY-MM-DD): ";
1685.        cin >> start_date;
1686.
1687.        cout << "Enter end date (YYYY-MM-DD): ";
1688.        cin >> end_date;
1689.
1690.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1691.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1692.            return 0;
1693.        }
1694.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[0].factories[0].name_of_laboratory << ". (Category - " << categories[0].name <<"):"<< endl;
1695.
1696.        bool found_product = false;
1697.
1698.        for (const auto& category : categories) {
1699.            if (category.name == "Planes") {
1700.                for (const auto& factory : category.factories) {
1701.                    for (const auto& product : factory.products) {
1702.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1703.                            cout << product.name << endl;
1704.                            found_product = true;
1705.                        }
1706.                    }
1707.                }
1708.            }
1709.        }
1710.
1711.        if (!found_product) {
1712.  cout << "No products found within the specified period, Exiting the program..." << endl;
1713.            return 0;        }
1714.    }
1715.    if (answer_in_answer_in_answer12 == "2") {
1716.        string start_date;
1717.        string end_date;
1718.
1719.        cout << "Enter start date (YYYY-MM-DD): ";
1720.        cin >> start_date;
1721.
1722.        cout << "Enter end date (YYYY-MM-DD): ";
1723.        cin >> end_date;
1724.
1725.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1726.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1727.            return 0;
1728.        }
1729.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[1].factories[0].name_of_laboratory << ". (Category - " << categories[1].name <<"):"<< endl;
1730.
1731.        bool found_product = false;
1732.
1733.        for (const auto& category : categories) {
1734.            if (category.name == "Gliders") {
1735.                for (const auto& factory : category.factories) {
1736.                    for (const auto& product : factory.products) {
1737.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1738.                            cout << product.name << endl;
1739.                            found_product = true;
1740.                        }
1741.                    }
1742.                }
1743.            }
1744.        }
1745.
1746.        if (!found_product) {
1747.  cout << "No products found within the specified period, Exiting the program..." << endl;
1748.            return 0;        }
1749.    }
1750.    if (answer_in_answer_in_answer12 == "3") {
1751.        string start_date;
1752.        string end_date;
1753.
1754.        cout << "Enter start date (YYYY-MM-DD): ";
1755.        cin >> start_date;
1756.
1757.        cout << "Enter end date (YYYY-MM-DD): ";
1758.        cin >> end_date;
1759.
1760.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1761.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1762.            return 0;
1763.        }
1764.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[2].factories[0].name_of_laboratory << ". (Category - " << categories[2].name <<"):"<< endl;
1765.
1766.        bool found_product = false;
1767.
1768.        for (const auto& category : categories) {
1769.            if (category.name == "Helicopters") {
1770.                for (const auto& factory : category.factories) {
1771.                    for (const auto& product : factory.products) {
1772.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1773.                            cout << product.name << endl;
1774.                            found_product = true;
1775.                        }
1776.                    }
1777.                }
1778.            }
1779.        }
1780.
1781.        if (!found_product) {
1782.  cout << "No products found within the specified period, Exiting the program..." << endl;
1783.            return 0;        }
1784.    }
1785.    if (answer_in_answer_in_answer12 == "4") {
1786.        string start_date;
1787.        string end_date;
1788.
1789.        cout << "Enter start date (YYYY-MM-DD): ";
1790.        cin >> start_date;
1791.
1792.        cout << "Enter end date (YYYY-MM-DD): ";
1793.        cin >> end_date;
1794.
1795.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1796.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1797.            return 0;
1798.        }
1799.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[3].factories[0].name_of_laboratory << ". (Category - " << categories[3].name <<"):"<< endl;
1800.
1801.        bool found_product = false;
1802.
1803.        for (const auto& category : categories) {
1804.            if (category.name == "Hang gliders") {
1805.                for (const auto& factory : category.factories) {
1806.                    for (const auto& product : factory.products) {
1807.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1808.                            cout << product.name << endl;
1809.                            found_product = true;
1810.                        }
1811.                    }
1812.                }
1813.            }
1814.        }
1815.
1816.        if (!found_product) {
1817.  cout << "No products found within the specified period, Exiting the program..." << endl;
1818.            return 0;        }
1819.    }
1820.    if (answer_in_answer_in_answer12 == "5") {
1821.        string start_date;
1822.        string end_date;
1823.
1824.        cout << "Enter start date (YYYY-MM-DD): ";
1825.        cin >> start_date;
1826.
1827.        cout << "Enter end date (YYYY-MM-DD): ";
1828.        cin >> end_date;
1829.
1830.        if (!isValidDate(start_date) || !isValidDate(end_date)) {
1831.            cout << "Invalid date format. Please enter dates in the format YYYY-MM-DD." << endl;
1832.            return 0;
1833.        }
1834.                cout << "Here is a list of products that were tested in a certain period in our company on " << categories[4].factories[0].name_of_laboratory << ". (Category - " << categories[4].name <<"):"<< endl;
1835.
1836.        bool found_product = false;
1837.
1838.        for (const auto& category : categories) {
1839.            if (category.name == "Rockets") {
1840.                for (const auto& factory : category.factories) {
1841.                    for (const auto& product : factory.products) {
1842.                        if (product.date_for_laboratories >= start_date && product.date_for_laboratories <= end_date) {
1843.                            cout << product.name << endl;
1844.                            found_product = true;
1845.                        }
1846.                    }
1847.                }
1848.            }
1849.        }
1850.
1851.        if (!found_product) {
1852.  cout << "No products found within the specified period, Exiting the program..." << endl;
1853.            return 0;        }
1854.    } 
1855.     else if (answer_in_answer_in_answer12 =="q"){
1856.    cout << "Exiting the program..."<< endl;
1857.    return 0;
1858.}
1859.else {
1860.    cout << "Unknown command. Exiting the program..."<< endl;
1861.    return 0;
1862.}   
1863.        
1864.        
1865.    }
1866.else if (answer_in_answer_12 =="q"){
1867.    cout << "Exiting the program..."<< endl;
1868.    return 0;
1869.}
1870.else {
1871.    cout << "Unknown command. Exiting the program..."<< endl;
1872.    return 0;
1873.}
1874.     
1875.     
1876.
1877.
1878.return 0;
1879.
1880.}
1881.if (answer_category == "13"){
1882. cout << "There is a list of our laboratories, chose any (by number):"<< endl << "1. " << categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " << categories[2].factories[0].name_of_laboratory << endl << "4. " << categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl; 
1883.    
1884.     string answer_in_answer_13; 
1885.     getline (cin, answer_in_answer_13); 
1886.     if (answer_in_answer_13 == "1"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
1887.     string answer_in_answer_in_answer13;
1888.     getline (cin, answer_in_answer_in_answer13);
1889.if (answer_in_answer_in_answer13 == "1") {
1890.    cout << "There is a list of products for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
1891.         << "1. " << categories[0].factories[0].products[0].name << " " << categories[0].name << endl
1892.         << "2. " << categories[0].factories[0].products[1].name << " " << categories[0].name << endl
1893.         << "3. " << categories[0].factories[0].products[2].name << " " << categories[0].name << endl;
1894.
1895.    string answer_in_answer_in_answer_in_answer13;
1896.    getline(cin, answer_in_answer_in_answer_in_answer13);
1897.    if (answer_in_answer_in_answer_in_answer13 == "1") {
1898.        int startYear, endYear;
1899.        cout << "Enter start year: ";
1900.            if (!(cin >> startYear)) {
1901.        cout << "Invalid input for start year. Exiting the program..." << endl;
1902.        cin.clear();
1903.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
1904.        return 0;
1905.    }
1906.        if (startYear == 'q') {
1907.        cout << "Exiting the program..." << endl;
1908.        return 0;
1909.    }
1910.        cout << "Enter end year: ";
1911.        cin >> endYear;
1912.        cin.ignore();
1913.                if (endYear == 'q') {
1914.        cout << "Exiting the program..." << endl;
1915.        return 0;
1916.    }
1917.
1918.        // Access the desired product and its testers based on the selected years
1919.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
1920.            const Product& product = categories[0].factories[0].products[0];  
1921.            for (int year = startYear; year <= endYear; ++year) {
1922.                if (year == 2020) {
1923.                    cout << "Testers for year 2020: ";
1924.                    for (const string& tester : product.testers_per_time_2020) {
1925.                        cout << tester << ", ";
1926.                    }
1927.                    cout << endl;
1928.                }
1929.                if (year == 2021) {
1930.                    cout << "Testers for year 2021: ";
1931.                    for (const string& tester : product.testers_per_time_2021) {
1932.                        cout << tester << ", ";
1933.                    }
1934.                    cout << endl;
1935.                } else if (year == 2022) {
1936.                    cout << "Testers for year 2022: ";
1937.                    for (const string& tester : product.testers_per_time_2022) {
1938.                        cout << tester << ", ";
1939.                    }
1940.                    cout << endl;
1941.                } else if (year == 2023) {
1942.                    cout << "Testers for year 2023: ";
1943.                    for (const string& tester : product.testers_per_time_2023) {
1944.                        cout << tester << ", ";
1945.                    }
1946.                    cout << endl;
1947.                }
1948.            }
1949.        } else {
1950.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
1951.        return 0;
1952.  
1953.    }
1954.        break;
1955.    }
1956.    if (answer_in_answer_in_answer_in_answer13 == "2") {
1957.                int startYear, endYear;
1958.        cout << "Enter start year: ";
1959.            if (!(cin >> startYear)) {
1960.        cout << "Invalid input for start year. Exiting the program..." << endl;
1961.        cin.clear();
1962.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
1963.        return 0;
1964.    }
1965.        if (startYear == 'q') {
1966.        cout << "Exiting the program..." << endl;
1967.        return 0;
1968.    }
1969.        cout << "Enter end year: ";
1970.        cin >> endYear;
1971.        cin.ignore();
1972.                if (endYear == 'q') {
1973.        cout << "Exiting the program..." << endl;
1974.        return 0;
1975.    }
1976.
1977.        
1978.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
1979.            const Product& product = categories[0].factories[0].products[1];  
1980.            for (int year = startYear; year <= endYear; ++year) {
1981.                if (year == 2020) {
1982.                    cout << "Testers for year 2020: ";
1983.                    for (const string& tester : product.testers_per_time_2020) {
1984.                        cout << tester << ", ";
1985.                    }
1986.                    cout << endl;
1987.                }
1988.                if (year == 2021) {
1989.                    cout << "Testers for year 2021: ";
1990.                    for (const string& tester : product.testers_per_time_2021) {
1991.                        cout << tester << ", ";
1992.                    }
1993.                    cout << endl;
1994.                } else if (year == 2022) {
1995.                    cout << "Testers for year 2022: ";
1996.                    for (const string& tester : product.testers_per_time_2022) {
1997.                        cout << tester << ", ";
1998.                    }
1999.                    cout << endl;
2000.                } else if (year == 2023) {
2001.                    cout << "Testers for year 2023: ";
2002.                    for (const string& tester : product.testers_per_time_2023) {
2003.                        cout << tester << ", ";
2004.                    }
2005.                    cout << endl;
2006.                }
2007.            }
2008.        } else {
2009.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2010.        return 0;
2011.  
2012.    }
2013.        break;
2014.    }
2015.    if (answer_in_answer_in_answer_in_answer13 == "3") {
2016.                       int startYear, endYear;
2017.        cout << "Enter start year: ";
2018.            if (!(cin >> startYear)) {
2019.        cout << "Invalid input for start year. Exiting the program..." << endl;
2020.        cin.clear();
2021.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2022.        return 0;
2023.    }
2024.        if (startYear == 'q') {
2025.        cout << "Exiting the program..." << endl;
2026.        return 0;
2027.    }
2028.        cout << "Enter end year: ";
2029.        cin >> endYear;
2030.        cin.ignore();
2031.                if (endYear == 'q') {
2032.        cout << "Exiting the program..." << endl;
2033.        return 0;
2034.    }
2035.
2036.       
2037.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2038.            const Product& product = categories[0].factories[0].products[2];  
2039.            for (int year = startYear; year <= endYear; ++year) {
2040.                if (year == 2020) {
2041.                    cout << "Testers for year 2020: ";
2042.                    for (const string& tester : product.testers_per_time_2020) {
2043.                        cout << tester << ", ";
2044.                    }
2045.                    cout << endl;
2046.                }
2047.                if (year == 2021) {
2048.                    cout << "Testers for year 2021: ";
2049.                    for (const string& tester : product.testers_per_time_2021) {
2050.                        cout << tester << ", ";
2051.                    }
2052.                    cout << endl;
2053.                } else if (year == 2022) {
2054.                    cout << "Testers for year 2022: ";
2055.                    for (const string& tester : product.testers_per_time_2022) {
2056.                        cout << tester << ", ";
2057.                    }
2058.                    cout << endl;
2059.                } else if (year == 2023) {
2060.                    cout << "Testers for year 2023: ";
2061.                    for (const string& tester : product.testers_per_time_2023) {
2062.                        cout << tester << ", ";
2063.                    }
2064.                    cout << endl;
2065.                }
2066.            }
2067.        } else {
2068.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2069.        return 0;
2070.  
2071.    }
2072.        break;
2073.    }
2074.    else if (answer_in_answer_in_answer_in_answer13 == "q"){
2075.        cout << "Exiting the program..."<< endl;
2076.        return 0;
2077.    }
2078.    else {
2079.        cout << "Unknown command. Exiting the program..."<< endl;
2080.        return 0;
2081.    }
2082.}
2083.
2084.if (answer_in_answer_in_answer13 == "2") {
2085.    cout << "There is a list of categories for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
2086.         << "1. " << categories[0].name << endl;
2087.
2088.    string answer_in_answer_in_answer_in_answer13;
2089.    getline(cin, answer_in_answer_in_answer_in_answer13);
2090.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2091.        int startYear, endYear;
2092.        cout << "Enter start year: ";
2093.            if (!(cin >> startYear)) {
2094.        cout << "Invalid input for start year. Exiting the program..." << endl;
2095.        cin.clear();
2096.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2097.        return 0;
2098.    }
2099.        if (startYear == 'q') {
2100.        cout << "Exiting the program..." << endl;
2101.        return 0;
2102.    }
2103.        cout << "Enter end year: ";
2104.        cin >> endYear;
2105.        cin.ignore();
2106.                if (endYear == 'q') {
2107.        cout << "Exiting the program..." << endl;
2108.        return 0;
2109.    }
2110.        cout << endl << "Category " << categories[0].name << ":" << endl << endl;
2111.
2112.       
2113.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2114.            const Category& selectedCategory = categories[0]; 
2115.            for (const Factory& factory : selectedCategory.factories) {
2116.                for (const Product& product : factory.products) {
2117.                    cout << "Product: " << product.name << endl;
2118.                    for (int year = startYear; year <= endYear; ++year) {
2119.                        cout << "Testers for year " << year << ": ";
2120.                        const vector<string>& testers = [&]() {
2121.                            switch (year) {
2122.                                case 2020:
2123.                                    return product.testers_per_time_2020;
2124.                                case 2021:
2125.                                    return product.testers_per_time_2021;
2126.                                case 2022:
2127.                                    return product.testers_per_time_2022;
2128.                                case 2023:
2129.                                    return product.testers_per_time_2023;
2130.                                default:
2131.                                    return product.testers_per_time_2020;
2132.                            }
2133.                        }();
2134.                        for (const string& tester : testers) {
2135.                            cout << tester << ", ";
2136.                        }
2137.                        cout << endl;
2138.                    }
2139.                    cout << endl;
2140.                }
2141.            }
2142.        } else {
2143.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2144.        return 0;
2145.  
2146.    }
2147.    }
2148.    else if (answer_in_answer_in_answer_in_answer13 == "q"){
2149.        cout<<"Exiting the program..."<< endl;
2150.        return 0;
2151.    }
2152.    else {
2153.        cout << "Unknown command. Exiting the program..."<< endl;
2154.        return 0;
2155.    }
2156.    break;
2157.}
2158.
2159.if (answer_in_answer_in_answer13 == "3") {
2160.    int startYear, endYear;
2161.    cout << "Enter start year: ";
2162.      if (!(cin >> startYear)) {
2163.        cout << "Invalid input for start year. Exiting the program..." << endl;
2164.        cin.clear();
2165.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2166.        return 0;
2167.    }
2168.        if (startYear == 'q') {
2169.        cout << "Exiting the program..." << endl;
2170.        return 0;
2171.    }
2172.    cout << "Enter end year: ";
2173.    cin >> endYear;
2174.        if (endYear == 'q') {
2175.        cout << "Exiting the program..." << endl;
2176.        return 0;
2177.    }
2178.
2179.   
2180.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2181.        const Category& selectedCategory = categories[0]; 
2182.        for (const Factory& factory : selectedCategory.factories) {
2183.            for (const Product& product : factory.products) {
2184.                cout << "Product: " << product.name << endl;
2185.                for (int year = startYear; year <= endYear; ++year) {
2186.                    cout << "Testers for year " << year << ": ";
2187.                    const vector<string>& testers = [&]() {
2188.                        switch (year) {
2189.                            case 2020:
2190.                                return product.testers_per_time_2020;
2191.                            case 2021:
2192.                                return product.testers_per_time_2021;
2193.                            case 2022:
2194.                                return product.testers_per_time_2022;
2195.                            case 2023:
2196.                                return product.testers_per_time_2023;
2197.                            default:
2198.                                return product.testers_per_time_2020;
2199.                        }
2200.                    }();
2201.                    for (const string& tester : testers) {
2202.                        cout << tester << ", ";
2203.                    }
2204.                    cout << endl;
2205.                }
2206.                cout << endl;
2207.            }
2208.        }
2209.    } else {
2210.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2211.        return 0;
2212.  
2213.    }
2214.     break;
2215.}
2216.else if (answer_in_answer_in_answer13 == "q"){
2217.    cout << "Exiting the program..."<< endl;
2218.    return 0;
2219.}
2220.else {
2221.    cout << "Unknown command. Exiting the program..."<< endl;
2222.    return 0;
2223.}
2224.         
2225.     }
2226.     
2227.     
2228.     //------------------------------------------------------------------------
2229.     
2230.     
2231.       if (answer_in_answer_13 == "2"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
2232.     string answer_in_answer_in_answer13;
2233.     getline (cin, answer_in_answer_in_answer13);
2234.if (answer_in_answer_in_answer13 == "1") {
2235.    cout << "There is a list of products for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
2236.         << "1. " << categories[1].factories[0].products[0].name << endl;
2237.
2238.    string answer_in_answer_in_answer_in_answer13;
2239.    getline(cin, answer_in_answer_in_answer_in_answer13);
2240.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2241.        int startYear, endYear;
2242.    cout << "Enter start year: ";
2243.      if (!(cin >> startYear)) {
2244.        cout << "Invalid input for start year. Exiting the program..." << endl;
2245.        cin.clear();
2246.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2247.        return 0;
2248.    }
2249.        if (startYear == 'q') {
2250.        cout << "Exiting the program..." << endl;
2251.        return 0;
2252.    }
2253.    cout << "Enter end year: ";
2254.    cin >> endYear;
2255.        if (endYear == 'q') {
2256.        cout << "Exiting the program..." << endl;
2257.        return 0;
2258.    }
2259.
2260.      
2261.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2262.            const Product& product = categories[1].factories[0].products[0];  
2263.            for (int year = startYear; year <= endYear; ++year) {
2264.                if (year == 2020) {
2265.                    cout << "Testers for year 2020: ";
2266.                    for (const string& tester : product.testers_per_time_2020) {
2267.                        cout << tester << ", ";
2268.                    }
2269.                    cout << endl;
2270.                }
2271.                if (year == 2021) {
2272.                    cout << "Testers for year 2021: ";
2273.                    for (const string& tester : product.testers_per_time_2021) {
2274.                        cout << tester << ", ";
2275.                    }
2276.                    cout << endl;
2277.                } else if (year == 2022) {
2278.                    cout << "Testers for year 2022: ";
2279.                    for (const string& tester : product.testers_per_time_2022) {
2280.                        cout << tester << ", ";
2281.                    }
2282.                    cout << endl;
2283.                } else if (year == 2023) {
2284.                    cout << "Testers for year 2023: ";
2285.                    for (const string& tester : product.testers_per_time_2023) {
2286.                        cout << tester << ", ";
2287.                    }
2288.                    cout << endl;
2289.                }
2290.            }
2291.        } else {
2292.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2293.        return 0;
2294.  
2295.    }
2296.        break;
2297.    }
2298.    if (answer_in_answer_in_answer_in_answer13 == "q"){
2299.        cout << "Exiting the program..."<< endl;
2300.        return 0;
2301.    }
2302.    else {
2303.        cout << "Unknowm command. Exiting the program..."<< endl;
2304.        return 0;
2305.    }
2306.
2307.}
2308.
2309.if (answer_in_answer_in_answer13 == "2") {
2310.    cout << "There is a list of categories for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
2311.         << "1. " << categories[1].name << endl;
2312.
2313.    string answer_in_answer_in_answer_in_answer13;
2314.    getline(cin, answer_in_answer_in_answer_in_answer13);
2315.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2316.        int startYear, endYear;
2317.    cout << "Enter start year: ";
2318.      if (!(cin >> startYear)) {
2319.        cout << "Invalid input for start year. Exiting the program..." << endl;
2320.        cin.clear();
2321.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2322.        return 0;
2323.    }
2324.        if (startYear == 'q') {
2325.        cout << "Exiting the program..." << endl;
2326.        return 0;
2327.    }
2328.    cout << "Enter end year: ";
2329.    cin >> endYear;
2330.        if (endYear == 'q') {
2331.        cout << "Exiting the program..." << endl;
2332.        return 0;
2333.    }
2334.        cout << endl << "Category " << categories[1].name << ":" << endl << endl;
2335.
2336.      
2337.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2338.            const Category& selectedCategory = categories[0]; 
2339.            for (const Factory& factory : selectedCategory.factories) {
2340.                for (const Product& product : factory.products) {
2341.                    cout << "Product: " << product.name << endl;
2342.                    for (int year = startYear; year <= endYear; ++year) {
2343.                        cout << "Testers for year " << year << ": ";
2344.                        const vector<string>& testers = [&]() {
2345.                            switch (year) {
2346.                                case 2020:
2347.                                    return product.testers_per_time_2020;
2348.                                case 2021:
2349.                                    return product.testers_per_time_2021;
2350.                                case 2022:
2351.                                    return product.testers_per_time_2022;
2352.                                case 2023:
2353.                                    return product.testers_per_time_2023;
2354.                                default:
2355.                                    return product.testers_per_time_2020;
2356.                            }
2357.                        }();
2358.                        for (const string& tester : testers) {
2359.                            cout << tester << ", ";
2360.                        }
2361.                        cout << endl;
2362.                    }
2363.                    cout << endl;
2364.                }
2365.            }
2366.        } else {
2367.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2368.        return 0;
2369.  
2370.    }
2371.    }
2372.        if (answer_in_answer_in_answer_in_answer13 == "q"){
2373.        cout << "Exiting the program..."<< endl;
2374.        return 0;
2375.    }
2376.    else {
2377.        cout << "Unknowm command. Exiting the program..."<< endl;
2378.        return 0;
2379.    }
2380.    
2381.    break;
2382.}
2383.
2384.if (answer_in_answer_in_answer13 == "3") {
2385.    int startYear, endYear;
2386.    cout << "Enter start year: ";
2387.      if (!(cin >> startYear)) {
2388.        cout << "Invalid input for start year. Exiting the program..." << endl;
2389.        cin.clear();
2390.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2391.        return 0;
2392.    }
2393.        if (startYear == 'q') {
2394.        cout << "Exiting the program..." << endl;
2395.        return 0;
2396.    }
2397.    cout << "Enter end year: ";
2398.    cin >> endYear;
2399.        if (endYear == 'q') {
2400.        cout << "Exiting the program..." << endl;
2401.        return 0;
2402.    }
2403.
2404.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2405.        const Category& selectedCategory = categories[1]; 
2406.        for (const Factory& factory : selectedCategory.factories) {
2407.            for (const Product& product : factory.products) {
2408.                cout << "Product: " << product.name << endl;
2409.                for (int year = startYear; year <= endYear; ++year) {
2410.                    cout << "Testers for year " << year << ": ";
2411.                    const vector<string>& testers = [&]() {
2412.                        switch (year) {
2413.                            case 2020:
2414.                                return product.testers_per_time_2020;
2415.                            case 2021:
2416.                                return product.testers_per_time_2021;
2417.                            case 2022:
2418.                                return product.testers_per_time_2022;
2419.                            case 2023:
2420.                                return product.testers_per_time_2023;
2421.                            default:
2422.                                return product.testers_per_time_2020;
2423.                        }
2424.                    }();
2425.                    for (const string& tester : testers) {
2426.                        cout << tester << ", ";
2427.                    }
2428.                    cout << endl;
2429.                }
2430.                cout << endl;
2431.            }
2432.        }
2433.    } else {
2434.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2435.        return 0;
2436.  
2437.    }
2438.     break;
2439.}
2440.if (answer_in_answer_in_answer13 == "q"){
2441.    cout<<"Exiting the program..."<< endl;
2442.    return 0;
2443.}
2444.else {
2445.    cout << "Unknowm command. Exiting the program..."<< endl;
2446.    return 0;
2447.}
2448.         
2449.     }
2450.     
2451.     //---------------------------------------------------------------------------------
2452.     
2453.          if (answer_in_answer_13 == "3"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
2454.     string answer_in_answer_in_answer13;
2455.     getline (cin, answer_in_answer_in_answer13);
2456.if (answer_in_answer_in_answer13 == "1") {
2457.    cout << "There is a list of products for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
2458.         << "1. " << categories[2].factories[0].products[0].name << endl;
2459.
2460.    string answer_in_answer_in_answer_in_answer13;
2461.    getline(cin, answer_in_answer_in_answer_in_answer13);
2462.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2463.        int startYear, endYear;
2464.    cout << "Enter start year: ";
2465.      if (!(cin >> startYear)) {
2466.        cout << "Invalid input for start year. Exiting the program..." << endl;
2467.        cin.clear();
2468.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2469.        return 0;
2470.    }
2471.        if (startYear == 'q') {
2472.        cout << "Exiting the program..." << endl;
2473.        return 0;
2474.    }
2475.    cout << "Enter end year: ";
2476.    cin >> endYear;
2477.        if (endYear == 'q') {
2478.        cout << "Exiting the program..." << endl;
2479.        return 0;
2480.    }
2481.
2482.   
2483.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2484.            const Product& product = categories[2].factories[0].products[0];  
2485.            for (int year = startYear; year <= endYear; ++year) {
2486.                if (year == 2020) {
2487.                    cout << "Testers for year 2020: ";
2488.                    for (const string& tester : product.testers_per_time_2020) {
2489.                        cout << tester << ", ";
2490.                    }
2491.                    cout << endl;
2492.                }
2493.                if (year == 2021) {
2494.                    cout << "Testers for year 2021: ";
2495.                    for (const string& tester : product.testers_per_time_2021) {
2496.                        cout << tester << ", ";
2497.                    }
2498.                    cout << endl;
2499.                } else if (year == 2022) {
2500.                    cout << "Testers for year 2022: ";
2501.                    for (const string& tester : product.testers_per_time_2022) {
2502.                        cout << tester << ", ";
2503.                    }
2504.                    cout << endl;
2505.                } else if (year == 2023) {
2506.                    cout << "Testers for year 2023: ";
2507.                    for (const string& tester : product.testers_per_time_2023) {
2508.                        cout << tester << ", ";
2509.                    }
2510.                    cout << endl;
2511.                }
2512.            }
2513.        } else {
2514.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2515.        return 0;
2516.  
2517.    }
2518.        break;
2519.    }
2520.        if (answer_in_answer_in_answer_in_answer13 == "q"){
2521.        cout << "Exiting the program..."<< endl;
2522.        return 0;
2523.    }
2524.    else {
2525.        cout << "Unknowm command. Exiting the program..."<< endl;
2526.        return 0;
2527.    }
2528.
2529.}
2530.
2531.if (answer_in_answer_in_answer13 == "2") {
2532.    cout << "There is a list of categories for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
2533.         << "1. " << categories[2].name << endl;
2534.
2535.    string answer_in_answer_in_answer_in_answer13;
2536.    getline(cin, answer_in_answer_in_answer_in_answer13);
2537.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2538.        int startYear, endYear;
2539.    cout << "Enter start year: ";
2540.      if (!(cin >> startYear)) {
2541.        cout << "Invalid input for start year. Exiting the program..." << endl;
2542.        cin.clear();
2543.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2544.        return 0;
2545.    }
2546.        if (startYear == 'q') {
2547.        cout << "Exiting the program..." << endl;
2548.        return 0;
2549.    }
2550.    cout << "Enter end year: ";
2551.    cin >> endYear;
2552.        if (endYear == 'q') {
2553.        cout << "Exiting the program..." << endl;
2554.        return 0;
2555.    }
2556.        cout << endl << "Category " << categories[2].name << ":" << endl << endl;
2557.
2558.
2559.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2560.            const Category& selectedCategory = categories[2];
2561.            for (const Factory& factory : selectedCategory.factories) {
2562.                for (const Product& product : factory.products) {
2563.                    cout << "Product: " << product.name << endl;
2564.                    for (int year = startYear; year <= endYear; ++year) {
2565.                        cout << "Testers for year " << year << ": ";
2566.                        const vector<string>& testers = [&]() {
2567.                            switch (year) {
2568.                                case 2020:
2569.                                    return product.testers_per_time_2020;
2570.                                case 2021:
2571.                                    return product.testers_per_time_2021;
2572.                                case 2022:
2573.                                    return product.testers_per_time_2022;
2574.                                case 2023:
2575.                                    return product.testers_per_time_2023;
2576.                                default:
2577.                                    return product.testers_per_time_2020;
2578.                            }
2579.                        }();
2580.                        for (const string& tester : testers) {
2581.                            cout << tester << ", ";
2582.                        }
2583.                        cout << endl;
2584.                    }
2585.                    cout << endl;
2586.                }
2587.            }
2588.        } else {
2589.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2590.        return 0;
2591.  
2592.    }
2593.    }
2594.        if (answer_in_answer_in_answer_in_answer13 == "q"){
2595.        cout << "Exiting the program..."<< endl;
2596.        return 0;
2597.    }
2598.    else {
2599.        cout << "Unknowm command. Exiting the program..."<< endl;
2600.        return 0;
2601.    }
2602.    break;
2603.}
2604.
2605.if (answer_in_answer_in_answer13 == "3") {
2606.    int startYear, endYear;
2607.    cout << "Enter start year: ";
2608.      if (!(cin >> startYear)) {
2609.        cout << "Invalid input for start year. Exiting the program..." << endl;
2610.        cin.clear();
2611.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2612.        return 0;
2613.    }
2614.        if (startYear == 'q') {
2615.        cout << "Exiting the program..." << endl;
2616.        return 0;
2617.    }
2618.    cout << "Enter end year: ";
2619.    cin >> endYear;
2620.        if (endYear == 'q') {
2621.        cout << "Exiting the program..." << endl;
2622.        return 0;
2623.    }
2624.
2625.
2626.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2627.        const Category& selectedCategory = categories[2]; 
2628.        for (const Factory& factory : selectedCategory.factories) {
2629.            for (const Product& product : factory.products) {
2630.                cout << "Product: " << product.name << endl;
2631.                for (int year = startYear; year <= endYear; ++year) {
2632.                    cout << "Testers for year " << year << ": ";
2633.                    const vector<string>& testers = [&]() {
2634.                        switch (year) {
2635.                            case 2020:
2636.                                return product.testers_per_time_2020;
2637.                            case 2021:
2638.                                return product.testers_per_time_2021;
2639.                            case 2022:
2640.                                return product.testers_per_time_2022;
2641.                            case 2023:
2642.                                return product.testers_per_time_2023;
2643.                            default:
2644.                                return product.testers_per_time_2020;
2645.                        }
2646.                    }();
2647.                    for (const string& tester : testers) {
2648.                        cout << tester << ", ";
2649.                    }
2650.                    cout << endl;
2651.                }
2652.                cout << endl;
2653.            }
2654.        }
2655.    } else {
2656.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2657.        return 0;
2658.  
2659.    }
2660.     break;
2661.}
2662.   else if (answer_in_answer_in_answer13 == "q"){
2663.       cout << "Exiting the program..."<< endl;
2664.       return 0;
2665.   }
2666.   else {
2667.       cout << "Unknown command. Exiting the program..."<< endl;
2668.       return 0;
2669.   }
2670.     }
2671.     
2672.     //-----------------------------------------------------------------------------------------------
2673.     
2674.              if (answer_in_answer_13 == "4"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
2675.     string answer_in_answer_in_answer13;
2676.     getline (cin, answer_in_answer_in_answer13);
2677.if (answer_in_answer_in_answer13 == "1") {
2678.    cout << "There is a list of products for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
2679.         << "1. " << categories[3].factories[0].products[0].name  << endl;
2680.
2681.    string answer_in_answer_in_answer_in_answer13;
2682.    getline(cin, answer_in_answer_in_answer_in_answer13);
2683.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2684.        int startYear, endYear;
2685.    cout << "Enter start year: ";
2686.      if (!(cin >> startYear)) {
2687.        cout << "Invalid input for start year. Exiting the program..." << endl;
2688.        cin.clear();
2689.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2690.        return 0;
2691.    }
2692.        if (startYear == 'q') {
2693.        cout << "Exiting the program..." << endl;
2694.        return 0;
2695.    }
2696.    cout << "Enter end year: ";
2697.    cin >> endYear;
2698.        if (endYear == 'q') {
2699.        cout << "Exiting the program..." << endl;
2700.        return 0;
2701.    }
2702.
2703.      
2704.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2705.            const Product& product = categories[3].factories[0].products[0];  
2706.            for (int year = startYear; year <= endYear; ++year) {
2707.                if (year == 2020) {
2708.                    cout << "Testers for year 2020: ";
2709.                    for (const string& tester : product.testers_per_time_2020) {
2710.                        cout << tester << ", ";
2711.                    }
2712.                    cout << endl;
2713.                }
2714.                if (year == 2021) {
2715.                    cout << "Testers for year 2021: ";
2716.                    for (const string& tester : product.testers_per_time_2021) {
2717.                        cout << tester << ", ";
2718.                    }
2719.                    cout << endl;
2720.                } else if (year == 2022) {
2721.                    cout << "Testers for year 2022: ";
2722.                    for (const string& tester : product.testers_per_time_2022) {
2723.                        cout << tester << ", ";
2724.                    }
2725.                    cout << endl;
2726.                } else if (year == 2023) {
2727.                    cout << "Testers for year 2023: ";
2728.                    for (const string& tester : product.testers_per_time_2023) {
2729.                        cout << tester << ", ";
2730.                    }
2731.                    cout << endl;
2732.                }
2733.            }
2734.        } else {
2735.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2736.        return 0;
2737.  
2738.    }
2739.        break;
2740.    }
2741.    else if (answer_in_answer_in_answer_in_answer13 == "q"){
2742.        cout << "Exiting the program..."<< endl;
2743.        return 0;
2744.    }
2745.    else {
2746.        cout << "Unknown command. Exiting the program..."<< endl;
2747.        return 0;
2748.    }
2749.
2750.}
2751.
2752.if (answer_in_answer_in_answer13 == "2") {
2753.    cout << "There is a list of categories for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
2754.         << "1. " << categories[3].name << endl;
2755.
2756.    string answer_in_answer_in_answer_in_answer13;
2757.    getline(cin, answer_in_answer_in_answer_in_answer13);
2758.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2759.        int startYear, endYear;
2760.    cout << "Enter start year: ";
2761.      if (!(cin >> startYear)) {
2762.        cout << "Invalid input for start year. Exiting the program..." << endl;
2763.        cin.clear();
2764.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2765.        return 0;
2766.    }
2767.        if (startYear == 'q') {
2768.        cout << "Exiting the program..." << endl;
2769.        return 0;
2770.    }
2771.    cout << "Enter end year: ";
2772.    cin >> endYear;
2773.        if (endYear == 'q') {
2774.        cout << "Exiting the program..." << endl;
2775.        return 0;
2776.    }
2777.        cout << endl << "Category " << categories[3].name << ":" << endl << endl;
2778.
2779.    
2780.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2781.            const Category& selectedCategory = categories[3]; 
2782.            for (const Factory& factory : selectedCategory.factories) {
2783.                for (const Product& product : factory.products) {
2784.                    cout << "Product: " << product.name << endl;
2785.                    for (int year = startYear; year <= endYear; ++year) {
2786.                        cout << "Testers for year " << year << ": ";
2787.                        const vector<string>& testers = [&]() {
2788.                            switch (year) {
2789.                                case 2020:
2790.                                    return product.testers_per_time_2020;
2791.                                case 2021:
2792.                                    return product.testers_per_time_2021;
2793.                                case 2022:
2794.                                    return product.testers_per_time_2022;
2795.                                case 2023:
2796.                                    return product.testers_per_time_2023;
2797.                                default:
2798.                                    return product.testers_per_time_2020;
2799.                            }
2800.                        }();
2801.                        for (const string& tester : testers) {
2802.                            cout << tester << ", ";
2803.                        }
2804.                        cout << endl;
2805.                    }
2806.                    cout << endl;
2807.                }
2808.            }
2809.        } else {
2810.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2811.        return 0;
2812.  
2813.    }
2814.    }
2815.        else if (answer_in_answer_in_answer_in_answer13 == "q"){
2816.        cout << "Exiting the program..."<< endl;
2817.        return 0;
2818.    }
2819.    else {
2820.        cout << "Unknown command. Exiting the program..."<< endl;
2821.        return 0;
2822.    }
2823.    break;
2824.}
2825.
2826.if (answer_in_answer_in_answer13 == "3") {
2827.    int startYear, endYear;
2828.    cout << "Enter start year: ";
2829.      if (!(cin >> startYear)) {
2830.        cout << "Invalid input for start year. Exiting the program..." << endl;
2831.        cin.clear();
2832.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2833.        return 0;
2834.    }
2835.        if (startYear == 'q') {
2836.        cout << "Exiting the program..." << endl;
2837.        return 0;
2838.    }
2839.    cout << "Enter end year: ";
2840.    cin >> endYear;
2841.        if (endYear == 'q') {
2842.        cout << "Exiting the program..." << endl;
2843.        return 0;
2844.    }
2845.
2846.
2847.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2848.        const Category& selectedCategory = categories[3]; 
2849.        for (const Factory& factory : selectedCategory.factories) {
2850.            for (const Product& product : factory.products) {
2851.                cout << "Product: " << product.name << endl;
2852.                for (int year = startYear; year <= endYear; ++year) {
2853.                    cout << "Testers for year " << year << ": ";
2854.                    const vector<string>& testers = [&]() {
2855.                        switch (year) {
2856.                            case 2020:
2857.                                return product.testers_per_time_2020;
2858.                            case 2021:
2859.                                return product.testers_per_time_2021;
2860.                            case 2022:
2861.                                return product.testers_per_time_2022;
2862.                            case 2023:
2863.                                return product.testers_per_time_2023;
2864.                            default:
2865.                                return product.testers_per_time_2020;
2866.                        }
2867.                    }();
2868.                    for (const string& tester : testers) {
2869.                        cout << tester << ", ";
2870.                    }
2871.                    cout << endl;
2872.                }
2873.                cout << endl;
2874.            }
2875.        }
2876.    } else {
2877.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2878.        return 0;
2879.  
2880.    }
2881.     break;
2882.}
2883.else if (answer_in_answer_in_answer13 == "q"){
2884.    cout<< "Exiting the program..."<< endl;
2885.    return 0;
2886.}
2887.else {
2888.    cout << "Unknown command. Exiting the program"<< endl;
2889.    return 0;
2890.}
2891.         
2892.     }
2893.     
2894.     //----------------------------------------------------------------------------------------------------------
2895.          if (answer_in_answer_13 == "5"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
2896.     string answer_in_answer_in_answer13;
2897.     getline (cin, answer_in_answer_in_answer13);
2898.if (answer_in_answer_in_answer13 == "1") {
2899.    cout << "There is a list of products for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
2900.         << "1. " << categories[4].factories[0].products[0].name << " " << categories[0].name << endl
2901.         << "2. " << categories[4].factories[0].products[1].name << " " << categories[0].name << endl
2902.         << "3. " << categories[4].factories[0].products[2].name << " " << categories[0].name << endl;
2903.
2904.    string answer_in_answer_in_answer_in_answer13;
2905.    getline(cin, answer_in_answer_in_answer_in_answer13);
2906.    if (answer_in_answer_in_answer_in_answer13 == "1") {
2907.        int startYear, endYear;
2908.    cout << "Enter start year: ";
2909.      if (!(cin >> startYear)) {
2910.        cout << "Invalid input for start year. Exiting the program..." << endl;
2911.        cin.clear();
2912.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2913.        return 0;
2914.    }
2915.        if (startYear == 'q') {
2916.        cout << "Exiting the program..." << endl;
2917.        return 0;
2918.    }
2919.    cout << "Enter end year: ";
2920.    cin >> endYear;
2921.        if (endYear == 'q') {
2922.        cout << "Exiting the program..." << endl;
2923.        return 0;
2924.    }
2925.
2926.      
2927.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2928.            const Product& product = categories[4].factories[0].products[0];  
2929.            for (int year = startYear; year <= endYear; ++year) {
2930.                if (year == 2020) {
2931.                    cout << "Testers for year 2020: ";
2932.                    for (const string& tester : product.testers_per_time_2020) {
2933.                        cout << tester << ", ";
2934.                    }
2935.                    cout << endl;
2936.                }
2937.                if (year == 2021) {
2938.                    cout << "Testers for year 2021: ";
2939.                    for (const string& tester : product.testers_per_time_2021) {
2940.                        cout << tester << ", ";
2941.                    }
2942.                    cout << endl;
2943.                } else if (year == 2022) {
2944.                    cout << "Testers for year 2022: ";
2945.                    for (const string& tester : product.testers_per_time_2022) {
2946.                        cout << tester << ", ";
2947.                    }
2948.                    cout << endl;
2949.                } else if (year == 2023) {
2950.                    cout << "Testers for year 2023: ";
2951.                    for (const string& tester : product.testers_per_time_2023) {
2952.                        cout << tester << ", ";
2953.                    }
2954.                    cout << endl;
2955.                }
2956.            }
2957.        }else {
2958.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
2959.        return 0;
2960.  
2961.    }
2962.        break;
2963.    
2964.    if (answer_in_answer_in_answer_in_answer13 == "2") {
2965.                int startYear, endYear;
2966.    cout << "Enter start year: ";
2967.      if (!(cin >> startYear)) {
2968.        cout << "Invalid input for start year. Exiting the program..." << endl;
2969.        cin.clear();
2970.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
2971.        return 0;
2972.    }
2973.        if (startYear == 'q') {
2974.        cout << "Exiting the program..." << endl;
2975.        return 0;
2976.    }
2977.    cout << "Enter end year: ";
2978.    cin >> endYear;
2979.        if (endYear == 'q') {
2980.        cout << "Exiting the program..." << endl;
2981.        return 0;
2982.    }
2983.
2984.      
2985.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
2986.            const Product& product = categories[4].factories[0].products[1];
2987.            for (int year = startYear; year <= endYear; ++year) {
2988.                if (year == 2020) {
2989.                    cout << "Testers for year 2020: ";
2990.                    for (const string& tester : product.testers_per_time_2020) {
2991.                        cout << tester << ", ";
2992.                    }
2993.                    cout << endl;
2994.                }
2995.                if (year == 2021) {
2996.                    cout << "Testers for year 2021: ";
2997.                    for (const string& tester : product.testers_per_time_2021) {
2998.                        cout << tester << ", ";
2999.                    }
3000.                    cout << endl;
3001.                } else if (year == 2022) {
3002.                    cout << "Testers for year 2022: ";
3003.                    for (const string& tester : product.testers_per_time_2022) {
3004.                        cout << tester << ", ";
3005.                    }
3006.                    cout << endl;
3007.                } else if (year == 2023) {
3008.                    cout << "Testers for year 2023: ";
3009.                    for (const string& tester : product.testers_per_time_2023) {
3010.                        cout << tester << ", ";
3011.                    }
3012.                    cout << endl;
3013.                }
3014.            }
3015.        } else {
3016.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3017.        return 0;
3018.  
3019.    }
3020.        break;
3021.    }
3022.    if (answer_in_answer_in_answer_in_answer13 == "3") {
3023.                       int startYear, endYear;
3024.    cout << "Enter start year: ";
3025.      if (!(cin >> startYear)) {
3026.        cout << "Invalid input for start year. Exiting the program..." << endl;
3027.        cin.clear();
3028.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3029.        return 0;
3030.    }
3031.        if (startYear == 'q') {
3032.        cout << "Exiting the program..." << endl;
3033.        return 0;
3034.    }
3035.    cout << "Enter end year: ";
3036.    cin >> endYear;
3037.        if (endYear == 'q') {
3038.        cout << "Exiting the program..." << endl;
3039.        return 0;
3040.    }
3041.
3042.     
3043.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3044.            const Product& product = categories[4].factories[0].products[2];  
3045.            for (int year = startYear; year <= endYear; ++year) {
3046.                if (year == 2020) {
3047.                    cout << "Testers for year 2020: ";
3048.                    for (const string& tester : product.testers_per_time_2020) {
3049.                        cout << tester << ", ";
3050.                    }
3051.                    cout << endl;
3052.                }
3053.                if (year == 2021) {
3054.                    cout << "Testers for year 2021: ";
3055.                    for (const string& tester : product.testers_per_time_2021) {
3056.                        cout << tester << ", ";
3057.                    }
3058.                    cout << endl;
3059.                } else if (year == 2022) {
3060.                    cout << "Testers for year 2022: ";
3061.                    for (const string& tester : product.testers_per_time_2022) {
3062.                        cout << tester << ", ";
3063.                    }
3064.                    cout << endl;
3065.                } else if (year == 2023) {
3066.                    cout << "Testers for year 2023: ";
3067.                    for (const string& tester : product.testers_per_time_2023) {
3068.                        cout << tester << ", ";
3069.                    }
3070.                    cout << endl;
3071.                }
3072.            }
3073.        } else {
3074.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3075.        return 0;
3076.  
3077.    }
3078.        break;
3079.    }
3080.    else if (answer_in_answer_in_answer_in_answer13 == "q"){
3081.        cout<< "Exiting the program..."<< endl;
3082.        return 0;
3083.    }
3084.    else {
3085.        cout<< "Unknown command. Exiting the program..."<< endl;
3086.        return 0;
3087.    }
3088.}
3089.}
3090.
3091.if (answer_in_answer_in_answer13 == "2") {
3092.    cout << "There is a list of categories for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
3093.         << "1. " << categories[4].name << endl;
3094.
3095.    string answer_in_answer_in_answer_in_answer13;
3096.    getline(cin, answer_in_answer_in_answer_in_answer13);
3097.    if (answer_in_answer_in_answer_in_answer13 == "1") {
3098.        int startYear, endYear;
3099.    cout << "Enter start year: ";
3100.      if (!(cin >> startYear)) {
3101.        cout << "Invalid input for start year. Exiting the program..." << endl;
3102.        cin.clear();
3103.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3104.        return 0;
3105.    }
3106.        if (startYear == 'q') {
3107.        cout << "Exiting the program..." << endl;
3108.        return 0;
3109.    }
3110.    cout << "Enter end year: ";
3111.    cin >> endYear;
3112.        if (endYear == 'q') {
3113.        cout << "Exiting the program..." << endl;
3114.        return 0;
3115.    }
3116.        cout << endl << "Category " << categories[4].name << ":" << endl << endl;
3117.
3118.    
3119.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3120.            const Category& selectedCategory = categories[4]; 
3121.            for (const Factory& factory : selectedCategory.factories) {
3122.                for (const Product& product : factory.products) {
3123.                    cout << "Product: " << product.name << endl;
3124.                    for (int year = startYear; year <= endYear; ++year) {
3125.                        cout << "Testers for year " << year << ": ";
3126.                        const vector<string>& testers = [&]() {
3127.                            switch (year) {
3128.                                case 2020:
3129.                                    return product.testers_per_time_2020;
3130.                                case 2021:
3131.                                    return product.testers_per_time_2021;
3132.                                case 2022:
3133.                                    return product.testers_per_time_2022;
3134.                                case 2023:
3135.                                    return product.testers_per_time_2023;
3136.                                default:
3137.                                    return product.testers_per_time_2020;
3138.                            }
3139.                        }();
3140.                        for (const string& tester : testers) {
3141.                            cout << tester << ", ";
3142.                        }
3143.                        cout << endl;
3144.                    }
3145.                    cout << endl;
3146.                }
3147.            }
3148.        } else {
3149.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3150.        return 0;
3151.  
3152.    }
3153.    }
3154.        else if (answer_in_answer_in_answer_in_answer13 == "q"){
3155.        cout<< "Exiting the program..."<< endl;
3156.        return 0;
3157.    }
3158.    else {
3159.        cout<< "Unknown command. Exiting the program..."<< endl;
3160.        return 0;
3161.    }
3162.    break;
3163.}
3164.
3165.if (answer_in_answer_in_answer13 == "3") {
3166.    int startYear, endYear;
3167.    cout << "Enter start year: ";
3168.      if (!(cin >> startYear)) {
3169.        cout << "Invalid input for start year. Exiting the program..." << endl;
3170.        cin.clear();
3171.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3172.        return 0;
3173.    }
3174.        if (startYear == 'q') {
3175.        cout << "Exiting the program..." << endl;
3176.        return 0;
3177.    }
3178.    cout << "Enter end year: ";
3179.    cin >> endYear;
3180.        if (endYear == 'q') {
3181.        cout << "Exiting the program..." << endl;
3182.        return 0;
3183.    }
3184.
3185. 
3186.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3187.        const Category& selectedCategory = categories[4]; 
3188.        for (const Factory& factory : selectedCategory.factories) {
3189.            for (const Product& product : factory.products) {
3190.                cout << "Product: " << product.name << endl;
3191.                for (int year = startYear; year <= endYear; ++year) {
3192.                    cout << "Testers for year " << year << ": ";
3193.                    const vector<string>& testers = [&]() {
3194.                        switch (year) {
3195.                            case 2020:
3196.                                return product.testers_per_time_2020;
3197.                            case 2021:
3198.                                return product.testers_per_time_2021;
3199.                            case 2022:
3200.                                return product.testers_per_time_2022;
3201.                            case 2023:
3202.                                return product.testers_per_time_2023;
3203.                            default:
3204.                                return product.testers_per_time_2020;
3205.                        }
3206.                    }();
3207.                    for (const string& tester : testers) {
3208.                        cout << tester << ", ";
3209.                    }
3210.                    cout << endl;
3211.                }
3212.                cout << endl;
3213.            }
3214.        }
3215.    } else {
3216.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3217.        return 0;
3218.  
3219.    }
3220.     break;
3221.}
3222.
3223.   else if (answer_in_answer_in_answer13 == "q"){
3224.       cout << "Exiting the program..."<< endl;
3225.       return 0;
3226.   }
3227.   else {
3228.       cout << "Unknown command. Exiting the program..."<< endl;
3229.       return 0;
3230.   }
3231.
3232.         
3233.     }
3234.     else if (answer_in_answer_13 == "q"){
3235.         cout << "Exiting the program..." << endl;
3236.         return 0;
3237.     }
3238.     else {
3239.         cout << "Unknown command. Exiting the program..."<< endl;
3240.         return 0;
3241.     }
3242. }
3243.       if (answer_category == "14"){
3244.            cout << "There is a list of our laboratories, chose any (by number):"<< endl << "1. " << categories[0].factories[0].name_of_laboratory << endl << "2. " << categories[1].factories[0].name_of_laboratory << endl << "3. " << categories[2].factories[0].name_of_laboratory << endl << "4. " << categories[3].factories[0].name_of_laboratory << endl << "5. " << categories[4].factories[0].name_of_laboratory << endl; 
3245.    
3246.     string answer_in_answer_14; 
3247.     getline (cin, answer_in_answer_14); 
3248.     if (answer_in_answer_14 == "1"){ cout << "Get the composition of the equipment used in the test" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
3249.     string answer_in_answer_in_answer14;
3250.     getline (cin, answer_in_answer_in_answer14);
3251.if (answer_in_answer_in_answer14 == "1") {
3252.    cout << "There is a list of products for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
3253.         << "1. " << categories[0].factories[0].products[0].name << " " << categories[0].name << endl
3254.         << "2. " << categories[0].factories[0].products[1].name << " " << categories[0].name << endl
3255.         << "3. " << categories[0].factories[0].products[2].name << " " << categories[0].name << endl;
3256.
3257.    string answer_in_answer_in_answer_in_answer14;
3258.    getline(cin, answer_in_answer_in_answer_in_answer14);
3259.    if (answer_in_answer_in_answer_in_answer14 == "1") {
3260.        int startYear, endYear;
3261.        cout << "Enter start year: ";
3262.            if (!(cin >> startYear)) {
3263.        cout << "Invalid input for start year. Exiting the program..." << endl;
3264.        cin.clear();
3265.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3266.        return 0;
3267.    }
3268.        if (startYear == 'q') {
3269.        cout << "Exiting the program..." << endl;
3270.        return 0;
3271.    }
3272.        cout << "Enter end year: ";
3273.        cin >> endYear;
3274.        cin.ignore();
3275.                if (endYear == 'q') {
3276.        cout << "Exiting the program..." << endl;
3277.        return 0;
3278.    }
3279.
3280.      
3281.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3282.            const Product& product = categories[0].factories[0].products[0];  
3283.            for (int year = startYear; year <= endYear; ++year) {
3284.                if (year == 2020) {
3285.                    cout << "Equipment for year 2020: ";
3286.                    for (const string& equipment : product.equipment_per_time_2020) {
3287.                        cout << equipment << ", ";
3288.                    }
3289.                    cout << endl;
3290.                }
3291.                if (year == 2021) {
3292.                    cout << "Equipment for year 2021: ";
3293.                    for (const string& equipment : product.equipment_per_time_2021) {
3294.                        cout << equipment << ", ";
3295.                    }
3296.                    cout << endl;
3297.                } else if (year == 2022) {
3298.                    cout << "Equipment for year 2022: ";
3299.                    for (const string& equipment : product.equipment_per_time_2022) {
3300.                        cout << equipment << ", ";
3301.                    }
3302.                    cout << endl;
3303.                } else if (year == 2023) {
3304.                    cout << "Equipment for year 2023: ";
3305.                    for (const string& equipment : product.equipment_per_time_2023) {
3306.                        cout << equipment << ", ";
3307.                    }
3308.                    cout << endl;
3309.                }
3310.            }
3311.        } else {
3312.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3313.        return 0;
3314.  
3315.    }
3316.        break;
3317.    }
3318.    if (answer_in_answer_in_answer_in_answer14 == "2") {
3319.                int startYear, endYear;
3320.        cout << "Enter start year: ";
3321.            if (!(cin >> startYear)) {
3322.        cout << "Invalid input for start year. Exiting the program..." << endl;
3323.        cin.clear();
3324.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3325.        return 0;
3326.    }
3327.        if (startYear == 'q') {
3328.        cout << "Exiting the program..." << endl;
3329.        return 0;
3330.    }
3331.        cout << "Enter end year: ";
3332.        cin >> endYear;
3333.        cin.ignore();
3334.                if (endYear == 'q') {
3335.        cout << "Exiting the program..." << endl;
3336.        return 0;
3337.    }
3338.
3339.       
3340.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3341.            const Product& product = categories[0].factories[0].products[1];  
3342.            for (int year = startYear; year <= endYear; ++year) {
3343.                if (year == 2020) {
3344.                    cout << "Testers for year 2020: ";
3345.                    for (const string& equipment : product.equipment_per_time_2020) {
3346.                        cout << equipment << ", ";
3347.                    }
3348.                    cout << endl;
3349.                }
3350.                if (year == 2021) {
3351.                    cout << "Testers for year 2021: ";
3352.                    for (const string& equipment : product.equipment_per_time_2021) {
3353.                        cout << equipment << ", ";
3354.                    }
3355.                    cout << endl;
3356.                } else if (year == 2022) {
3357.                    cout << "Testers for year 2022: ";
3358.                    for (const string& equipment : product.equipment_per_time_2022) {
3359.                        cout << equipment << ", ";
3360.                    }
3361.                    cout << endl;
3362.                } else if (year == 2023) {
3363.                    cout << "Testers for year 2023: ";
3364.                    for (const string& equipment : product.equipment_per_time_2023) {
3365.                        cout << equipment << ", ";
3366.                    }
3367.                    cout << endl;
3368.                }
3369.            }
3370.        } else {
3371.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3372.        return 0;
3373.  
3374.    }
3375.        break;
3376.    }
3377.    if (answer_in_answer_in_answer_in_answer14 == "3") {
3378.                       int startYear, endYear;
3379.        cout << "Enter start year: ";
3380.            if (!(cin >> startYear)) {
3381.        cout << "Invalid input for start year. Exiting the program..." << endl;
3382.        cin.clear();
3383.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3384.        return 0;
3385.    }
3386.        if (startYear == 'q') {
3387.        cout << "Exiting the program..." << endl;
3388.        return 0;
3389.    }
3390.        cout << "Enter end year: ";
3391.        cin >> endYear;
3392.        cin.ignore();
3393.                if (endYear == 'q') {
3394.        cout << "Exiting the program..." << endl;
3395.        return 0;
3396.    }
3397.
3398.     
3399.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3400.            const Product& product = categories[0].factories[0].products[2]; 
3401.            for (int year = startYear; year <= endYear; ++year) {
3402.                if (year == 2020) {
3403.                    cout << "Testers for year 2020: ";
3404.                    for (const string& equipment : product.equipment_per_time_2020) {
3405.                        cout << equipment << ", ";
3406.                    }
3407.                    cout << endl;
3408.                }
3409.                if (year == 2021) {
3410.                    cout << "Testers for year 2021: ";
3411.                    for (const string& equipment : product.equipment_per_time_2021) {
3412.                        cout << equipment << ", ";
3413.                    }
3414.                    cout << endl;
3415.                } else if (year == 2022) {
3416.                    cout << "Testers for year 2022: ";
3417.                    for (const string& equipment : product.equipment_per_time_2022) {
3418.                        cout << equipment << ", ";
3419.                    }
3420.                    cout << endl;
3421.                } else if (year == 2023) {
3422.                    cout << "Testers for year 2023: ";
3423.                    for (const string& equipment : product.equipment_per_time_2023) {
3424.                        cout << equipment << ", ";
3425.                    }
3426.                    cout << endl;
3427.                }
3428.            }
3429.        } else {
3430.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3431.        return 0;
3432.  
3433.    }
3434.        break;
3435.    }
3436.    else if (answer_in_answer_in_answer_in_answer14 == "q"){
3437.        cout<<"Exiting the program..."<<endl;
3438.        return 0;
3439.    }
3440.    else {
3441.        cout<< "Unknown command. Exiting the program..."<< endl;
3442.        return 0;
3443.    }
3444.}
3445.
3446.if (answer_in_answer_in_answer14 == "2") {
3447.    cout << "There is a list of categories for " << categories[0].factories[0].name_of_laboratory << " (choose one by number):" << endl
3448.         << "1. " << categories[0].name << endl;
3449.
3450.    string answer_in_answer_in_answer_in_answer14;
3451.    getline(cin, answer_in_answer_in_answer_in_answer14);
3452.    if (answer_in_answer_in_answer_in_answer14 == "1") {
3453.        int startYear, endYear;
3454.        cout << "Enter start year: ";
3455.            if (!(cin >> startYear)) {
3456.        cout << "Invalid input for start year. Exiting the program..." << endl;
3457.        cin.clear();
3458.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3459.        return 0;
3460.    }
3461.        if (startYear == 'q') {
3462.        cout << "Exiting the program..." << endl;
3463.        return 0;
3464.    }
3465.        cout << "Enter end year: ";
3466.        cin >> endYear;
3467.        cin.ignore();
3468.                if (endYear == 'q') {
3469.        cout << "Exiting the program..." << endl;
3470.        return 0;
3471.    }
3472.        cout << endl << "Category " << categories[0].name << ":" << endl << endl;
3473.
3474.     
3475.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3476.            const Category& selectedCategory = categories[0]; 
3477.            for (const Factory& factory : selectedCategory.factories) {
3478.                for (const Product& product : factory.products) {
3479.                    cout << "Product: " << product.name << endl;
3480.                    for (int year = startYear; year <= endYear; ++year) {
3481.                        cout << "Equipment for year " << year << ": ";
3482.                        const vector<string>& testers = [&]() {
3483.                            switch (year) {
3484.                                case 2020:
3485.                                    return product.equipment_per_time_2020;
3486.                                case 2021:
3487.                                    return product.equipment_per_time_2021;
3488.                                case 2022:
3489.                                    return product.equipment_per_time_2022;
3490.                                case 2023:
3491.                                    return product.equipment_per_time_2023;
3492.                                default:
3493.                                    return product.equipment_per_time_2020;
3494.                            }
3495.                        }();
3496.                        for (const string& tester : testers) {
3497.                            cout << tester << ", ";
3498.                        }
3499.                        cout << endl;
3500.                    }
3501.                    cout << endl;
3502.                }
3503.            }
3504.        } else {
3505.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3506.        return 0;
3507.  
3508.    }
3509.    }
3510.        else if (answer_in_answer_in_answer_in_answer14 == "q"){
3511.        cout<<"Exiting the program..."<<endl;
3512.        return 0;
3513.    }
3514.    else {
3515.        cout<< "Unknown command. Exiting the program..."<< endl;
3516.        return 0;
3517.    }
3518.    
3519.    break;
3520.}
3521.
3522.if (answer_in_answer_in_answer14 == "3") {
3523.    int startYear, endYear;
3524.        cout << "Enter start year: ";
3525.            if (!(cin >> startYear)) {
3526.        cout << "Invalid input for start year. Exiting the program..." << endl;
3527.        cin.clear();
3528.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3529.        return 0;
3530.    }
3531.        if (startYear == 'q') {
3532.        cout << "Exiting the program..." << endl;
3533.        return 0;
3534.    }
3535.        cout << "Enter end year: ";
3536.        cin >> endYear;
3537.        cin.ignore();
3538.                if (endYear == 'q') {
3539.        cout << "Exiting the program..." << endl;
3540.        return 0;
3541.    }
3542.
3543.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3544.        const Category& selectedCategory = categories[0]; 
3545.        for (const Factory& factory : selectedCategory.factories) {
3546.            for (const Product& product : factory.products) {
3547.                cout << "Product: " << product.name << endl;
3548.                for (int year = startYear; year <= endYear; ++year) {
3549.                    cout << "Equipment for year " << year << ": ";
3550.                    const vector<string>& testers = [&]() {
3551.                        switch (year) {
3552.                            case 2020:
3553.                                return product.equipment_per_time_2020;
3554.                            case 2021:
3555.                                return product.equipment_per_time_2021;
3556.                            case 2022:
3557.                                return product.equipment_per_time_2022;
3558.                            case 2023:
3559.                                return product.equipment_per_time_2023;
3560.                            default:
3561.                                return product.equipment_per_time_2020;
3562.                        }
3563.                    }();
3564.                    for (const string& tester : testers) {
3565.                        cout << tester << ", ";
3566.                    }
3567.                    cout << endl;
3568.                }
3569.                cout << endl;
3570.            }
3571.        }
3572.    } else {
3573.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3574.        return 0;
3575.  
3576.    }
3577.     break;
3578.}
3579.else if (answer_in_answer_in_answer14 == "q"){
3580.    cout <<"Exiting the program..."<< endl;
3581.    return 0;
3582.}
3583.else {
3584.    cout<< "Unknown command. Exiting the program..."<< endl;
3585.    return 0;
3586.}
3587.         
3588.     }
3589.     
3590.     
3591.     //------------------------------------------------------------------------
3592.     
3593.     
3594.       if (answer_in_answer_14 == "2"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
3595.     string answer_in_answer_in_answer14;
3596.     getline (cin, answer_in_answer_in_answer14);
3597.if (answer_in_answer_in_answer14 == "1") {
3598.    cout << "There is a list of products for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
3599.         << "1. " << categories[1].factories[0].products[0].name << endl;
3600.
3601.    string answer_in_answer_in_answer_in_answer14;
3602.    getline(cin, answer_in_answer_in_answer_in_answer14);
3603.    if (answer_in_answer_in_answer_in_answer14 == "1") {
3604.        int startYear, endYear;
3605.        cout << "Enter start year: ";
3606.            if (!(cin >> startYear)) {
3607.        cout << "Invalid input for start year. Exiting the program..." << endl;
3608.        cin.clear();
3609.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3610.        return 0;
3611.    }
3612.        if (startYear == 'q') {
3613.        cout << "Exiting the program..." << endl;
3614.        return 0;
3615.    }
3616.        cout << "Enter end year: ";
3617.        cin >> endYear;
3618.        cin.ignore();
3619.                if (endYear == 'q') {
3620.        cout << "Exiting the program..." << endl;
3621.        return 0;
3622.    }
3623.
3624.       
3625.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3626.            const Product& product = categories[1].factories[0].products[0];  
3627.            for (int year = startYear; year <= endYear; ++year) {
3628.                if (year == 2020) {
3629.                    cout << "Equipment for year 2020: ";
3630.                    for (const string& equipment : product.equipment_per_time_2020) {
3631.                        cout << equipment << ", ";
3632.                    }
3633.                    cout << endl;
3634.                }
3635.                if (year == 2021) {
3636.                    cout << "Equipment for year 2021: ";
3637.                    for (const string& equipment : product.equipment_per_time_2021) {
3638.                        cout << equipment << ", ";
3639.                    }
3640.                    cout << endl;
3641.                } else if (year == 2022) {
3642.                    cout << "Equipment for year 2022: ";
3643.                    for (const string& equipment : product.equipment_per_time_2022) {
3644.                        cout << equipment << ", ";
3645.                    }
3646.                    cout << endl;
3647.                } else if (year == 2023) {
3648.                    cout << "Equipment for year 2023: ";
3649.                    for (const string& equipment : product.equipment_per_time_2023) {
3650.                        cout << equipment << ", ";
3651.                    }
3652.                    cout << endl;
3653.                }
3654.            }
3655.        } else {
3656.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3657.        return 0;
3658.  
3659.    }
3660.        break;
3661.    }
3662.    
3663.          else if (answer_in_answer_in_answer_in_answer14 == "q"){
3664.        cout<<"Exiting the program..."<<endl;
3665.        return 0;
3666.    }
3667.    else {
3668.        cout<< "Unknown command. Exiting the program..."<< endl;
3669.        return 0;
3670.    }  
3671.    
3672.
3673.}
3674.
3675.if (answer_in_answer_in_answer14 == "2") {
3676.    cout << "There is a list of categories for " << categories[1].factories[0].name_of_laboratory << " (choose one by number):" << endl
3677.         << "1. " << categories[1].name << endl;
3678.
3679.    string answer_in_answer_in_answer_in_answer14;
3680.    getline(cin, answer_in_answer_in_answer_in_answer14);
3681.    if (answer_in_answer_in_answer_in_answer14 == "1") {
3682.        int startYear, endYear;
3683.        cout << "Enter start year: ";
3684.            if (!(cin >> startYear)) {
3685.        cout << "Invalid input for start year. Exiting the program..." << endl;
3686.        cin.clear();
3687.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3688.        return 0;
3689.    }
3690.        if (startYear == 'q') {
3691.        cout << "Exiting the program..." << endl;
3692.        return 0;
3693.    }
3694.        cout << "Enter end year: ";
3695.        cin >> endYear;
3696.        cin.ignore();
3697.                if (endYear == 'q') {
3698.        cout << "Exiting the program..." << endl;
3699.        return 0;
3700.    }
3701.        cout << endl << "Category " << categories[1].name << ":" << endl << endl;
3702.
3703.      
3704.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3705.            const Category& selectedCategory = categories[0];
3706.            for (const Factory& factory : selectedCategory.factories) {
3707.                for (const Product& product : factory.products) {
3708.                    cout << "Product: " << product.name << endl;
3709.                    for (int year = startYear; year <= endYear; ++year) {
3710.                        cout << "Equipment for year " << year << ": ";
3711.                        const vector<string>& equipment = [&]() {
3712.                            switch (year) {
3713.                                case 2020:
3714.                                    return product.equipment_per_time_2020;
3715.                                case 2021:
3716.                                    return product.equipment_per_time_2021;
3717.                                case 2022:
3718.                                    return product.equipment_per_time_2022;
3719.                                case 2023:
3720.                                    return product.equipment_per_time_2023;
3721.                                default:
3722.                                    return product.equipment_per_time_2020;
3723.                            }
3724.                        }();
3725.                        for (const string& equipment : equipment) {
3726.                            cout << equipment << ", ";
3727.                        }
3728.                        cout << endl;
3729.                    }
3730.                    cout << endl;
3731.                }
3732.            }
3733.        } else {
3734.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3735.        return 0;
3736.  
3737.    }
3738.    }
3739.             else if (answer_in_answer_in_answer_in_answer14 == "q"){
3740.        cout<<"Exiting the program..."<<endl;
3741.        return 0;
3742.    }
3743.    else {
3744.        cout<< "Unknown command. Exiting the program..."<< endl;
3745.        return 0;
3746.    }  
3747.    
3748.    
3749.    break;
3750.}
3751.
3752.if (answer_in_answer_in_answer14 == "3") {
3753.    int startYear, endYear;
3754.        cout << "Enter start year: ";
3755.            if (!(cin >> startYear)) {
3756.        cout << "Invalid input for start year. Exiting the program..." << endl;
3757.        cin.clear();
3758.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3759.        return 0;
3760.    }
3761.        if (startYear == 'q') {
3762.        cout << "Exiting the program..." << endl;
3763.        return 0;
3764.    }
3765.        cout << "Enter end year: ";
3766.        cin >> endYear;
3767.        cin.ignore();
3768.                if (endYear == 'q') {
3769.        cout << "Exiting the program..." << endl;
3770.        return 0;
3771.    }
3772.
3773.   
3774.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3775.        const Category& selectedCategory = categories[1]; 
3776.        for (const Factory& factory : selectedCategory.factories) {
3777.            for (const Product& product : factory.products) {
3778.                cout << "Product: " << product.name << endl;
3779.                for (int year = startYear; year <= endYear; ++year) {
3780.                    cout << "Equipment for year " << year << ": ";
3781.                    const vector<string>& equipment = [&]() {
3782.                        switch (year) {
3783.                            case 2020:
3784.                                return product.equipment_per_time_2020;
3785.                            case 2021:
3786.                                return product.equipment_per_time_2021;
3787.                            case 2022:
3788.                                return product.equipment_per_time_2022;
3789.                            case 2023:
3790.                                return product.equipment_per_time_2023;
3791.                            default:
3792.                                return product.equipment_per_time_2020;
3793.                        }
3794.                    }();
3795.                    for (const string& equipment : equipment) {
3796.                        cout << equipment << ", ";
3797.                    }
3798.                    cout << endl;
3799.                }
3800.                cout << endl;
3801.            }
3802.        }
3803.    } else {
3804.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3805.        return 0;
3806.  
3807.    }
3808.     break;
3809.}
3810.
3811.else if (answer_in_answer_in_answer14 == "q"){
3812.    cout <<"Exiting the program..."<< endl;
3813.    return 0;
3814.}
3815.else {
3816.    cout<< "Unknown command. Exiting the program..."<< endl;
3817.    return 0;
3818.}
3819.
3820.
3821.         
3822.     }
3823.     
3824.     //---------------------------------------------------------------------------------
3825.     
3826.          if (answer_in_answer_14 == "3"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
3827.     string answer_in_answer_in_answer14;
3828.     getline (cin, answer_in_answer_in_answer14);
3829.if (answer_in_answer_in_answer14 == "1") {
3830.    cout << "There is a list of products for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
3831.         << "1. " << categories[2].factories[0].products[0].name << endl;
3832.
3833.    string answer_in_answer_in_answer_in_answer14;
3834.    getline(cin, answer_in_answer_in_answer_in_answer14);
3835.    if (answer_in_answer_in_answer_in_answer14 == "1") {
3836.        int startYear, endYear;
3837.        cout << "Enter start year: ";
3838.            if (!(cin >> startYear)) {
3839.        cout << "Invalid input for start year. Exiting the program..." << endl;
3840.        cin.clear();
3841.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3842.        return 0;
3843.    }
3844.        if (startYear == 'q') {
3845.        cout << "Exiting the program..." << endl;
3846.        return 0;
3847.    }
3848.        cout << "Enter end year: ";
3849.        cin >> endYear;
3850.        cin.ignore();
3851.                if (endYear == 'q') {
3852.        cout << "Exiting the program..." << endl;
3853.        return 0;
3854.    }
3855.
3856.
3857.       
3858.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3859.            const Product& product = categories[2].factories[0].products[0];  
3860.            for (int year = startYear; year <= endYear; ++year) {
3861.                if (year == 2020) {
3862.                    cout << "Equipment for year 2020: ";
3863.                    for (const string& equipment : product.equipment_per_time_2020) {
3864.                        cout << equipment << ", ";
3865.                    }
3866.                    cout << endl;
3867.                }
3868.                if (year == 2021) {
3869.                    cout << "Testers for year 2021: ";
3870.                    for (const string& equipment : product.equipment_per_time_2021) {
3871.                        cout << equipment << ", ";
3872.                    }
3873.                    cout << endl;
3874.                } else if (year == 2022) {
3875.                    cout << "Testers for year 2022: ";
3876.                    for (const string& equipment : product.equipment_per_time_2022) {
3877.                        cout << equipment << ", ";
3878.                    }
3879.                    cout << endl;
3880.                } else if (year == 2023) {
3881.                    cout << "Testers for year 2023: ";
3882.                    for (const string& equipment : product.equipment_per_time_2023) {
3883.                        cout << equipment << ", ";
3884.                    }
3885.                    cout << endl;
3886.                }
3887.            }
3888.        } else {
3889.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3890.        return 0;
3891.  
3892.    }
3893.        break;
3894.    }
3895.    
3896.              else if (answer_in_answer_in_answer_in_answer14 == "q"){
3897.        cout<<"Exiting the program..."<<endl;
3898.        return 0;
3899.    }
3900.    else {
3901.        cout<< "Unknown command. Exiting the program..."<< endl;
3902.        return 0;
3903.    } 
3904.
3905.}
3906.
3907.if (answer_in_answer_in_answer14 == "2") {
3908.    cout << "There is a list of categories for " << categories[2].factories[0].name_of_laboratory << " (choose one by number):" << endl
3909.         << "1. " << categories[2].name << endl;
3910.
3911.    string answer_in_answer_in_answer_in_answer14;
3912.    getline(cin, answer_in_answer_in_answer_in_answer14);
3913.    if (answer_in_answer_in_answer_in_answer14 == "1") {
3914.        int startYear, endYear;
3915.        cout << "Enter start year: ";
3916.            if (!(cin >> startYear)) {
3917.        cout << "Invalid input for start year. Exiting the program..." << endl;
3918.        cin.clear();
3919.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3920.        return 0;
3921.    }
3922.        if (startYear == 'q') {
3923.        cout << "Exiting the program..." << endl;
3924.        return 0;
3925.    }
3926.        cout << "Enter end year: ";
3927.        cin >> endYear;
3928.        cin.ignore();
3929.                if (endYear == 'q') {
3930.        cout << "Exiting the program..." << endl;
3931.        return 0;
3932.    }
3933.        cout << endl << "Category " << categories[2].name << ":" << endl << endl;
3934.
3935.   
3936.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
3937.            const Category& selectedCategory = categories[2]; 
3938.            for (const Factory& factory : selectedCategory.factories) {
3939.                for (const Product& product : factory.products) {
3940.                    cout << "Product: " << product.name << endl;
3941.                    for (int year = startYear; year <= endYear; ++year) {
3942.                        cout << "Equipment for year " << year << ": ";
3943.                        const vector<string>& equipment = [&]() {
3944.                            switch (year) {
3945.                                case 2020:
3946.                                    return product.equipment_per_time_2020;
3947.                                case 2021:
3948.                                    return product.equipment_per_time_2021;
3949.                                case 2022:
3950.                                    return product.equipment_per_time_2022;
3951.                                case 2023:
3952.                                    return product.equipment_per_time_2023;
3953.                                default:
3954.                                    return product.equipment_per_time_2020;
3955.                            }
3956.                        }();
3957.                        for (const string& equipment : equipment) {
3958.                            cout << equipment << ", ";
3959.                        }
3960.                        cout << endl;
3961.                    }
3962.                    cout << endl;
3963.                }
3964.            }
3965.        } else {
3966.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
3967.        return 0;
3968.  
3969.    }
3970.    }
3971.    
3972.                  else if (answer_in_answer_in_answer_in_answer14 == "q"){
3973.        cout<<"Exiting the program..."<<endl;
3974.        return 0;
3975.    }
3976.    else {
3977.        cout<< "Unknown command. Exiting the program..."<< endl;
3978.        return 0;
3979.    } 
3980.    
3981.    
3982.    break;
3983.}
3984.
3985.if (answer_in_answer_in_answer14 == "3") {
3986.    int startYear, endYear;
3987.        cout << "Enter start year: ";
3988.            if (!(cin >> startYear)) {
3989.        cout << "Invalid input for start year. Exiting the program..." << endl;
3990.        cin.clear();
3991.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
3992.        return 0;
3993.    }
3994.        if (startYear == 'q') {
3995.        cout << "Exiting the program..." << endl;
3996.        return 0;
3997.    }
3998.        cout << "Enter end year: ";
3999.        cin >> endYear;
4000.        cin.ignore();
4001.                if (endYear == 'q') {
4002.        cout << "Exiting the program..." << endl;
4003.        return 0;
4004.    }
4005.
4006.    
4007.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4008.        const Category& selectedCategory = categories[2]; 
4009.        for (const Factory& factory : selectedCategory.factories) {
4010.            for (const Product& product : factory.products) {
4011.                cout << "Product: " << product.name << endl;
4012.                for (int year = startYear; year <= endYear; ++year) {
4013.                    cout << "Equipment for year " << year << ": ";
4014.                    const vector<string>& equipment = [&]() {
4015.                        switch (year) {
4016.                            case 2020:
4017.                                return product.equipment_per_time_2020;
4018.                            case 2021:
4019.                                return product.equipment_per_time_2021;
4020.                            case 2022:
4021.                                return product.equipment_per_time_2022;
4022.                            case 2023:
4023.                                return product.equipment_per_time_2023;
4024.                            default:
4025.                                return product.equipment_per_time_2020;
4026.                        }
4027.                    }();
4028.                    for (const string& equipment : equipment) {
4029.                        cout << equipment << ", ";
4030.                    }
4031.                    cout << endl;
4032.                }
4033.                cout << endl;
4034.            }
4035.        }
4036.    } else {
4037.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4038.        return 0;
4039.  
4040.    }
4041.     break;
4042.}
4043.else if (answer_in_answer_in_answer14 == "q"){
4044.    cout <<"Exiting the program..."<< endl;
4045.    return 0;
4046.}
4047.else {
4048.    cout<< "Unknown command. Exiting the program..."<< endl;
4049.    return 0;
4050.}
4051.         
4052.     }
4053.     
4054.     //-----------------------------------------------------------------------------------------------
4055.     
4056.              if (answer_in_answer_14 == "4"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
4057.     string answer_in_answer_in_answer14;
4058.     getline (cin, answer_in_answer_in_answer14);
4059.if (answer_in_answer_in_answer14 == "1") {
4060.    cout << "There is a list of products for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
4061.         << "1. " << categories[3].factories[0].products[0].name  << endl;
4062.
4063.    string answer_in_answer_in_answer_in_answer14;
4064.    getline(cin, answer_in_answer_in_answer_in_answer14);
4065.    if (answer_in_answer_in_answer_in_answer14 == "1") {
4066.        int startYear, endYear;
4067.        cout << "Enter start year: ";
4068.            if (!(cin >> startYear)) {
4069.        cout << "Invalid input for start year. Exiting the program..." << endl;
4070.        cin.clear();
4071.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4072.        return 0;
4073.    }
4074.        if (startYear == 'q') {
4075.        cout << "Exiting the program..." << endl;
4076.        return 0;
4077.    }
4078.        cout << "Enter end year: ";
4079.        cin >> endYear;
4080.        cin.ignore();
4081.                if (endYear == 'q') {
4082.        cout << "Exiting the program..." << endl;
4083.        return 0;
4084.    }
4085.
4086.
4087.     
4088.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4089.            const Product& product = categories[3].factories[0].products[0];  
4090.            for (int year = startYear; year <= endYear; ++year) {
4091.                if (year == 2020) {
4092.                    cout << "Equipment for year 2020: ";
4093.                    for (const string& equipment : product.equipment_per_time_2020) {
4094.                        cout << equipment << ", ";
4095.                    }
4096.                    cout << endl;
4097.                }
4098.                if (year == 2021) {
4099.                    cout << "Equipment for year 2021: ";
4100.                    for (const string& equipment : product.equipment_per_time_2021) {
4101.                        cout << equipment << ", ";
4102.                    }
4103.                    cout << endl;
4104.                } else if (year == 2022) {
4105.                    cout << "Equipment for year 2022: ";
4106.                    for (const string& equipment : product.equipment_per_time_2022) {
4107.                        cout << equipment << ", ";
4108.                    }
4109.                    cout << endl;
4110.                } else if (year == 2023) {
4111.                    cout << "Equipment for year 2023: ";
4112.                    for (const string& equipment : product.equipment_per_time_2023) {
4113.                        cout << equipment << ", ";
4114.                    }
4115.                    cout << endl;
4116.                }
4117.            }
4118.        } else {
4119.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4120.        return 0;
4121.  
4122.    }
4123.        break;
4124.    }
4125.    
4126.                    else if (answer_in_answer_in_answer_in_answer14 == "q"){
4127.        cout<<"Exiting the program..."<<endl;
4128.        return 0;
4129.    }
4130.    else {
4131.        cout<< "Unknown command. Exiting the program..."<< endl;
4132.        return 0;
4133.    }   
4134.    
4135.    
4136.    
4137.
4138.}
4139.
4140.if (answer_in_answer_in_answer14 == "2") {
4141.    cout << "There is a list of categories for " << categories[3].factories[0].name_of_laboratory << " (choose one by number):" << endl
4142.         << "1. " << categories[3].name << endl;
4143.
4144.    string answer_in_answer_in_answer_in_answer14;
4145.    getline(cin, answer_in_answer_in_answer_in_answer14);
4146.    if (answer_in_answer_in_answer_in_answer14 == "1") {
4147.        int startYear, endYear;
4148.        cout << "Enter start year: ";
4149.            if (!(cin >> startYear)) {
4150.        cout << "Invalid input for start year. Exiting the program..." << endl;
4151.        cin.clear();
4152.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4153.        return 0;
4154.    }
4155.        if (startYear == 'q') {
4156.        cout << "Exiting the program..." << endl;
4157.        return 0;
4158.    }
4159.        cout << "Enter end year: ";
4160.        cin >> endYear;
4161.        cin.ignore();
4162.                if (endYear == 'q') {
4163.        cout << "Exiting the program..." << endl;
4164.        return 0;
4165.    }
4166.        cout << endl << "Category " << categories[3].name << ":" << endl << endl;
4167.
4168.       
4169.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4170.            const Category& selectedCategory = categories[3]; 
4171.            for (const Factory& factory : selectedCategory.factories) {
4172.                for (const Product& product : factory.products) {
4173.                    cout << "Product: " << product.name << endl;
4174.                    for (int year = startYear; year <= endYear; ++year) {
4175.                        cout << "Equipment for year " << year << ": ";
4176.                        const vector<string>& equipment = [&]() {
4177.                            switch (year) {
4178.                                case 2020:
4179.                                    return product.equipment_per_time_2020;
4180.                                case 2021:
4181.                                    return product.equipment_per_time_2021;
4182.                                case 2022:
4183.                                    return product.equipment_per_time_2022;
4184.                                case 2023:
4185.                                    return product.equipment_per_time_2023;
4186.                                default:
4187.                                    return product.equipment_per_time_2020;
4188.                            }
4189.                        }();
4190.                        for (const string& equipment : equipment) {
4191.                            cout << equipment << ", ";
4192.                        }
4193.                        cout << endl;
4194.                    }
4195.                    cout << endl;
4196.                }
4197.            }
4198.        } else {
4199.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4200.        return 0;
4201.  
4202.    }
4203.    }
4204.    
4205.                        else if (answer_in_answer_in_answer_in_answer14 == "q"){
4206.        cout<<"Exiting the program..."<<endl;
4207.        return 0;
4208.    }
4209.    else {
4210.        cout<< "Unknown command. Exiting the program..."<< endl;
4211.        return 0;
4212.    } 
4213.    
4214.    
4215.    break;
4216.}
4217.
4218.if (answer_in_answer_in_answer14 == "3") {
4219.    int startYear, endYear;
4220.        cout << "Enter start year: ";
4221.            if (!(cin >> startYear)) {
4222.        cout << "Invalid input for start year. Exiting the program..." << endl;
4223.        cin.clear();
4224.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4225.        return 0;
4226.    }
4227.        if (startYear == 'q') {
4228.        cout << "Exiting the program..." << endl;
4229.        return 0;
4230.    }
4231.        cout << "Enter end year: ";
4232.        cin >> endYear;
4233.        cin.ignore();
4234.                if (endYear == 'q') {
4235.        cout << "Exiting the program..." << endl;
4236.        return 0;
4237.    }
4238.
4239.   
4240.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4241.        const Category& selectedCategory = categories[3];
4242.        for (const Factory& factory : selectedCategory.factories) {
4243.            for (const Product& product : factory.products) {
4244.                cout << "Product: " << product.name << endl;
4245.                for (int year = startYear; year <= endYear; ++year) {
4246.                    cout << "Equipment for year " << year << ": ";
4247.                    const vector<string>& equipment = [&]() {
4248.                        switch (year) {
4249.                            case 2020:
4250.                                return product.equipment_per_time_2020;
4251.                            case 2021:
4252.                                return product.equipment_per_time_2021;
4253.                            case 2022:
4254.                                return product.equipment_per_time_2022;
4255.                            case 2023:
4256.                                return product.equipment_per_time_2023;
4257.                            default:
4258.                                return product.equipment_per_time_2020;
4259.                        }
4260.                    }();
4261.                    for (const string& equipment : equipment) {
4262.                        cout << equipment << ", ";
4263.                    }
4264.                    cout << endl;
4265.                }
4266.                cout << endl;
4267.            }
4268.        }
4269.    } else {
4270.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4271.        return 0;
4272.  
4273.    }
4274.     break;
4275.}
4276.
4277.else if (answer_in_answer_in_answer14 == "q"){
4278.    cout <<"Exiting the program..."<< endl;
4279.    return 0;
4280.}
4281.else {
4282.    cout<< "Unknown command. Exiting the program..."<< endl;
4283.    return 0;
4284.}
4285.
4286.
4287.
4288.         
4289.     }
4290.     
4291.     //----------------------------------------------------------------------------------------------------------
4292.          if (answer_in_answer_14 == "5"){ cout << " Get a list of testers participating in the trials" << endl << "1. of the specified product" << endl << "2. of the specified category" << endl << "3. in general" << endl;
4293.     string answer_in_answer_in_answer14;
4294.     getline (cin, answer_in_answer_in_answer14);
4295.if (answer_in_answer_in_answer14 == "1") {
4296.    cout << "There is a list of products for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
4297.         << "1. " << categories[4].factories[0].products[0].name << " " << categories[0].name << endl
4298.         << "2. " << categories[4].factories[0].products[1].name << " " << categories[0].name << endl
4299.         << "3. " << categories[4].factories[0].products[2].name << " " << categories[0].name << endl;
4300.
4301.    string answer_in_answer_in_answer_in_answer14;
4302.    getline(cin, answer_in_answer_in_answer_in_answer14);
4303.    if (answer_in_answer_in_answer_in_answer14 == "1") {
4304.        int startYear, endYear;
4305.        cout << "Enter start year: ";
4306.            if (!(cin >> startYear)) {
4307.        cout << "Invalid input for start year. Exiting the program..." << endl;
4308.        cin.clear();
4309.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4310.        return 0;
4311.    }
4312.        if (startYear == 'q') {
4313.        cout << "Exiting the program..." << endl;
4314.        return 0;
4315.    }
4316.        cout << "Enter end year: ";
4317.        cin >> endYear;
4318.        cin.ignore();
4319.                if (endYear == 'q') {
4320.        cout << "Exiting the program..." << endl;
4321.        return 0;
4322.    }
4323.
4324.      
4325.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4326.            const Product& product = categories[4].factories[0].products[0];  
4327.            for (int year = startYear; year <= endYear; ++year) {
4328.                if (year == 2020) {
4329.                    cout << "equipment for year 2020: ";
4330.                    for (const string& equipment : product.equipment_per_time_2020) {
4331.                        cout << equipment << ", ";
4332.                    }
4333.                    cout << endl;
4334.                }
4335.                if (year == 2021) {
4336.                    cout << "Equipment for year 2021: ";
4337.                    for (const string& equipment : product.equipment_per_time_2021) {
4338.                        cout << equipment << ", ";
4339.                    }
4340.                    cout << endl;
4341.                } else if (year == 2022) {
4342.                    cout << "Equipment for year 2022: ";
4343.                    for (const string& equipment : product.equipment_per_time_2022) {
4344.                        cout << equipment << ", ";
4345.                    }
4346.                    cout << endl;
4347.                } else if (year == 2023) {
4348.                    cout << "Equipment for year 2023: ";
4349.                    for (const string& equipment : product.equipment_per_time_2023) {
4350.                        cout << equipment << ", ";
4351.                    }
4352.                    cout << endl;
4353.                }
4354.            }
4355.        } else {
4356.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4357.        return 0;
4358.  
4359.    }
4360.        break;
4361.    }
4362.    if (answer_in_answer_in_answer_in_answer14 == "2") {
4363.                int startYear, endYear;
4364.        cout << "Enter start year: ";
4365.            if (!(cin >> startYear)) {
4366.        cout << "Invalid input for start year. Exiting the program..." << endl;
4367.        cin.clear();
4368.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4369.        return 0;
4370.    }
4371.        if (startYear == 'q') {
4372.        cout << "Exiting the program..." << endl;
4373.        return 0;
4374.    }
4375.        cout << "Enter end year: ";
4376.        cin >> endYear;
4377.        cin.ignore();
4378.                if (endYear == 'q') {
4379.        cout << "Exiting the program..." << endl;
4380.        return 0;
4381.    }
4382.
4383.    
4384.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4385.            const Product& product = categories[4].factories[0].products[1]; 
4386.            for (int year = startYear; year <= endYear; ++year) {
4387.                if (year == 2020) {
4388.                    cout << "Equipment for year 2020: ";
4389.                    for (const string& equipment : product.equipment_per_time_2020) {
4390.                        cout << equipment << ", ";
4391.                    }
4392.                    cout << endl;
4393.                }
4394.                if (year == 2021) {
4395.                    cout << "Equipment for year 2021: ";
4396.                    for (const string& equipment : product.equipment_per_time_2021) {
4397.                        cout << equipment << ", ";
4398.                    }
4399.                    cout << endl;
4400.                } else if (year == 2022) {
4401.                    cout << "Equipment for year 2022: ";
4402.                    for (const string& equipment : product.equipment_per_time_2022) {
4403.                        cout << equipment << ", ";
4404.                    }
4405.                    cout << endl;
4406.                } else if (year == 2023) {
4407.                    cout << "Equipment for year 2023: ";
4408.                    for (const string& equipment : product.equipment_per_time_2023) {
4409.                        cout << equipment << ", ";
4410.                    }
4411.                    cout << endl;
4412.                }
4413.            }
4414.        } else {
4415.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4416.        return 0;
4417.  
4418.    }
4419.        break;
4420.    }
4421.    if (answer_in_answer_in_answer_in_answer14 == "3") {
4422.                       int startYear, endYear;
4423.        cout << "Enter start year: ";
4424.            if (!(cin >> startYear)) {
4425.        cout << "Invalid input for start year. Exiting the program..." << endl;
4426.        cin.clear();
4427.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4428.        return 0;
4429.    }
4430.        if (startYear == 'q') {
4431.        cout << "Exiting the program..." << endl;
4432.        return 0;
4433.    }
4434.        cout << "Enter end year: ";
4435.        cin >> endYear;
4436.        cin.ignore();
4437.                if (endYear == 'q') {
4438.        cout << "Exiting the program..." << endl;
4439.        return 0;
4440.    }
4441.      
4442.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4443.            const Product& product = categories[4].factories[0].products[2]; 
4444.            for (int year = startYear; year <= endYear; ++year) {
4445.                if (year == 2020) {
4446.                    cout << "Equipment for year 2020: ";
4447.                    for (const string& equipment : product.equipment_per_time_2020) {
4448.                        cout << equipment << ", ";
4449.                    }
4450.                    cout << endl;
4451.                }
4452.                if (year == 2021) {
4453.                    cout << "Equipment for year 2021: ";
4454.                    for (const string& tester : product.testers_per_time_2021) {
4455.                        cout << tester << ", ";
4456.                    }
4457.                    cout << endl;
4458.                } else if (year == 2022) {
4459.                    cout << "Equipment for year 2022: ";
4460.                    for (const string& equipment : product.equipment_per_time_2022) {
4461.                        cout << equipment << ", ";
4462.                    }
4463.                    cout << endl;
4464.                } else if (year == 2023) {
4465.                    cout << "Equipment for year 2023: ";
4466.                    for (const string& equipment : product.equipment_per_time_2023) {
4467.                        cout << equipment << ", ";
4468.                    }
4469.                    cout << endl;
4470.                }
4471.            }
4472.        } else {
4473.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4474.        return 0;
4475.  
4476.    }
4477.        break;
4478.    }
4479.    
4480.                            else if (answer_in_answer_in_answer_in_answer14 == "q"){
4481.        cout<<"Exiting the program..."<<endl;
4482.        return 0;
4483.    }
4484.    else {
4485.        cout<< "Unknown command. Exiting the program..."<< endl;
4486.        return 0;
4487.    } 
4488.    
4489.    
4490.    
4491.}
4492.
4493.if (answer_in_answer_in_answer14 == "2") {
4494.    cout << "There is a list of categories for " << categories[4].factories[0].name_of_laboratory << " (choose one by number):" << endl
4495.         << "1. " << categories[4].name << endl;
4496.
4497.    string answer_in_answer_in_answer_in_answer14;
4498.    getline(cin, answer_in_answer_in_answer_in_answer14);
4499.    if (answer_in_answer_in_answer_in_answer14 == "1") {
4500.        int startYear, endYear;
4501.        cout << "Enter start year: ";
4502.            if (!(cin >> startYear)) {
4503.        cout << "Invalid input for start year. Exiting the program..." << endl;
4504.        cin.clear();
4505.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4506.        return 0;
4507.    }
4508.        if (startYear == 'q') {
4509.        cout << "Exiting the program..." << endl;
4510.        return 0;
4511.    }
4512.        cout << "Enter end year: ";
4513.        cin >> endYear;
4514.        cin.ignore();
4515.                if (endYear == 'q') {
4516.        cout << "Exiting the program..." << endl;
4517.        return 0;
4518.    }
4519.        cout << endl << "Category " << categories[4].name << ":" << endl << endl;
4520.
4521.     
4522.        if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4523.            const Category& selectedCategory = categories[4]; 
4524.            for (const Factory& factory : selectedCategory.factories) {
4525.                for (const Product& product : factory.products) {
4526.                    cout << "Product: " << product.name << endl;
4527.                    for (int year = startYear; year <= endYear; ++year) {
4528.                        cout << "Equipment for year " << year << ": ";
4529.                        const vector<string>& equipment = [&]() {
4530.                            switch (year) {
4531.                                case 2020:
4532.                                    return product.equipment_per_time_2020;
4533.                                case 2021:
4534.                                    return product.equipment_per_time_2021;
4535.                                case 2022:
4536.                                    return product.equipment_per_time_2022;
4537.                                case 2023:
4538.                                    return product.equipment_per_time_2023;
4539.                                default:
4540.                                    return product.equipment_per_time_2020;
4541.                            }
4542.                        }();
4543.                        for (const string& equipment : equipment) {
4544.                            cout << equipment << ", ";
4545.                        }
4546.                        cout << endl;
4547.                    }
4548.                    cout << endl;
4549.                }
4550.            }
4551.        } else {
4552.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4553.        return 0;
4554.  
4555.    }
4556.    }
4557.    
4558.                                else if (answer_in_answer_in_answer_in_answer14 == "q"){
4559.        cout<<"Exiting the program..."<<endl;
4560.        return 0;
4561.    }
4562.    else {
4563.        cout<< "Unknown command. Exiting the program..."<< endl;
4564.        return 0;
4565.    }
4566.    
4567.    break;
4568.}
4569.
4570.if (answer_in_answer_in_answer14 == "3") {
4571.    int startYear, endYear;
4572.        cout << "Enter start year: ";
4573.            if (!(cin >> startYear)) {
4574.        cout << "Invalid input for start year. Exiting the program..." << endl;
4575.        cin.clear();
4576.        cin.ignore(numeric_limits<streamsize>::max(), '\n');
4577.        return 0;
4578.    }
4579.        if (startYear == 'q') {
4580.        cout << "Exiting the program..." << endl;
4581.        return 0;
4582.    }
4583.        cout << "Enter end year: ";
4584.        cin >> endYear;
4585.        cin.ignore();
4586.                if (endYear == 'q') {
4587.        cout << "Exiting the program..." << endl;
4588.        return 0;
4589.    }
4590.
4591.  
4592.    if (startYear >= 2020 && endYear <= 2023 && startYear <= endYear) {
4593.        const Category& selectedCategory = categories[4]; 
4594.        for (const Factory& factory : selectedCategory.factories) {
4595.            for (const Product& product : factory.products) {
4596.                cout << "Product: " << product.name << endl;
4597.                for (int year = startYear; year <= endYear; ++year) {
4598.                    cout << "Equipment for year " << year << ": ";
4599.                    const vector<string>& equipment = [&]() {
4600.                        switch (year) {
4601.                            case 2020:
4602.                                return product.equipment_per_time_2020;
4603.                            case 2021:
4604.                                return product.equipment_per_time_2021;
4605.                            case 2022:
4606.                                return product.equipment_per_time_2022;
4607.                            case 2023:
4608.                                return product.equipment_per_time_2023;
4609.                            default:
4610.                                return product.equipment_per_time_2020;
4611.                        }
4612.                    }();
4613.                    for (const string& equipment : equipment) {
4614.                        cout << equipment << ", ";
4615.                    }
4616.                    cout << endl;
4617.                }
4618.                cout << endl;
4619.            }
4620.        }
4621.    } else {
4622.        cout << "Invalid start and/or end years. Exiting the program..." << endl;
4623.        return 0;
4624.  
4625.    }
4626.     break;
4627.}
4628.         
4629.     }
4630.           
4631.     else if (answer_in_answer_14 == "q"){
4632.         cout<< "Exiting the program..."<< endl;
4633.         return 0;
4634.     } 
4635.     else {
4636.         cout<<"Unknown command. Exiting the program..."<< endl;
4637.         return 0;
4638.     }
4639.           
4640.           
4641.           
4642.       }
4643.                        if (answer_category == "15"){
4644.        string factory_name;
4645.        string answer_in_answer15;
4646.         string answer_in_answer_in_answer15;
4647.        string quit_factory_number;
4648.    while (true) {
4649.        cout <<"You want to know: " << endl << "1. The number of products produced by a separate factory currently" << endl << "2. The number of products produced by a separate area currently" << endl << "3. The number of products produced by a the enterprise as a whole currently " << endl;
4650.        getline(cin, answer_in_answer15);
4651.if (answer_in_answer15 == "1") { cout << "Do you want to also consider the category (yes/no)" << endl;
4652.    string category_or_no;
4653.    getline (cin, category_or_no);
4654.    if (category_or_no == "no"){
4655.    cout << "There is a list of names of our factories, choose one of them (by number) if you want to get the number and name of the products that are made here" << endl << "1. Factory Planes" << endl << "2. Factory Gliders" << endl << "3. Factory Helicopters" << endl << "4. Factory Hang Gliders" << endl << "5. Factory Rockets" << endl;
4656.    string question_numb_of_factory;
4657.    getline(cin, question_numb_of_factory);
4658.    if (question_numb_of_factory == "q") {cout<< "Exiting the program..."<<endl;
4659.        return 0;
4660.    }
4661.    if (question_numb_of_factory == "1" || question_numb_of_factory == "2" || question_numb_of_factory == "3" || question_numb_of_factory == "4" || question_numb_of_factory == "5") {
4662.        int category_index = stoi(question_numb_of_factory) - 1;
4663.        int year_index = 3;  
4664.        int total_amount = 0;
4665.        for (const auto& product : categories[category_index].factories[0].products) {
4666.            total_amount += product.amount_per_time_period[year_index];
4667.        }
4668.        cout << "The number of all the " << categories[category_index].name << " at the " << categories[category_index].factories[0].name << " Factory for present = " << total_amount << endl;
4669.    }
4670.    else {
4671.        cout<<"Unknown command. Exiting the program..."<< endl;
4672.        return 0;
4673.    }
4674.}
4675.if (category_or_no == "yes"){
4676.    cout << "There is a list of names of our factories, choose one of them (by number) if you want to get the number and name of the products that are made here" << endl << "1. Factory Planes" << endl << "2. Factory Gliders" << endl << "3. Factory Helicopterse" << endl << "4. Factory Hang Gliders" << endl << "5. Factory Rockets" << endl;       
4677.
4678.string question_numb_of_factory;
4679.getline(cin, question_numb_of_factory);
4680.if (question_numb_of_factory == "q") {cout<< "Exiting the program..."<<endl;
4681.        return 0;
4682.    }
4683.if (question_numb_of_factory == "1" || question_numb_of_factory == "2" || question_numb_of_factory == "3" || question_numb_of_factory == "4" || question_numb_of_factory == "5") {
4684.    int category_index = stoi(question_numb_of_factory) - 1;
4685.    int year_index = 3;
4686.    int total_amount = 0;
4687.    for (const auto& product : categories[category_index].factories[0].products) {
4688.        total_amount += product.amount_per_time_period[year_index];
4689.    }
4690.    cout << "Category: " << categories[category_index].name << endl;
4691.    cout << "The number of all the " << categories[category_index].name << " at the " << categories[category_index].factories[0].name << " Factory for present = " << total_amount << endl;
4692.}
4693.  else {
4694.        cout<<"Unknown command. Exiting the program..."<< endl;
4695.        return 0;
4696.    }
4697.    
4698.    
4699.}
4700.else if (category_or_no == "q") {
4701.        cout << "Exiting the program..." << endl;
4702.        return 0;
4703.    }
4704.    else {
4705.        cout<< "Unknown command. Exiting the program..."<< endl;
4706.        return 0;
4707.    }
4708.}
4709.
4710.if (answer_in_answer15 == "3") {
4711.    cout << "Do you want to display by categories? (yes/no)" << endl;
4712.    string category_or_no;
4713.    getline(cin, category_or_no);
4714.
4715.    if (category_or_no == "yes") {
4716.        for (const auto& category : categories) {
4717.            cout << "Category: " << category.name << endl;
4718.            for (const auto& factory : category.factories) {
4719.                int total_amount = 0;
4720.                for (const auto& product : factory.products) {
4721.                    total_amount += product.amount_per_time_period[3];
4722.                }
4723.                cout << "Factory: " << factory.name << endl;
4724.                cout << "The number of all the products at the " << factory.name << " Factory for the present year is: " << total_amount << endl;
4725.            }
4726.            cout << endl;
4727.        }
4728.    } else if (category_or_no == "no") {
4729.        for (const auto& category : categories) {
4730.            for (const auto& factory : category.factories) {
4731.                int total_amount = 0;
4732.                for (const auto& product : factory.products) {
4733.                    total_amount += product.amount_per_time_period[3];
4734.                }
4735.                cout << "Factory: " << factory.name << endl;
4736.                cout << "The number of all the products at the " << factory.name << " Factory for the present year is: " << total_amount << endl;
4737.            }
4738.            cout << endl;
4739.        }
4740.    } else if (category_or_no == "q") {
4741.        cout << "Exiting the program..." << endl;
4742.        return 0;
4743.    }
4744.    else {
4745.        cout<< "Unknown command. Exiting the program..."<< endl;
4746.        return 0;
4747.    }
4748.    
4749.    break;
4750.}
4751.if (answer_in_answer15 == "2") {
4752.    cout << "There is a list of names of our areas. Choose one of them (by number) if you want to get the number and name of the products that are made here:" << endl;
4753.    cout << "1. AftAoCP (Area for the Assembly of Civil Planes)" << endl;
4754.    cout << "2. AftAoTP (Area for the Assembly of Transport Planes)" << endl;
4755.    cout << "3. AftAoMP (Area for the Assembly of Military Planes)" << endl;
4756.    cout << "4. AftAoG (Area for the Assembly of Gliders)" << endl;
4757.    cout << "5. AftAoH (Area for the Assembly of Helicopters)" << endl;
4758.    cout << "6. AftAoHG (Area for the Assembly of Hang Gliders)" << endl;
4759.    cout << "7. AftAoAR (Area for the Assembly of Artillery Rockets)" << endl;
4760.    cout << "8. AftAoNR (Area for the Assembly of Naval Rockets)" << endl;
4761.    cout << "9. AftAoAvR (Area for the Assembly of Aviation Rockets)" << endl;
4762.    
4763.    string question_areas;
4764.    getline(cin, question_areas);
4765.    int area_index;
4766.    try {
4767.        area_index = stoi(question_areas) - 1;
4768.        if (area_index < 0 || area_index >= 9) {
4769.            throw out_of_range("Invalid area number");
4770.        }
4771.    } catch (const invalid_argument& e) {
4772.        cout << "Invalid input for area number. Exiting the program..." << endl;
4773.        return 0;
4774.    } catch (const out_of_range& e) {
4775.        cout << "Invalid area number. Exiting the program..." << endl;
4776.        return 0;
4777.    }
4778.    
4779.    cout << "Display with categories (yes/no)" << endl;
4780.    string category_or_no;
4781.    getline(cin, category_or_no);
4782.    
4783.    int factory_index = 0;
4784.    int product_index = 0;
4785.    
4786.    if (category_or_no == "yes") {
4787.        if (area_index >= 0 && area_index < 3) {
4788.            product_index = area_index;
4789.            cout << "The total number of all " << categories[0].name << " in " << categories[0].name << " category in the selected area nowadays = " << categories[0].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4790.            return 0;
4791.        } else if (area_index == 3) {
4792.            product_index = 0;
4793.            cout << "The total number of all " << categories[1].name << " in " << categories[1].name << " category products in the selected area nowadays = " << categories[1].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4794.            return 0;
4795.        } else if (area_index == 4) {
4796.            product_index = 0;
4797.            cout << "The total number of all " << categories[2].name << " in " << categories[2].name << " category products in the selected area nowadays = " << categories[2].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4798.            return 0;
4799.        } else if (area_index == 5) {
4800.            product_index = 0;
4801.            cout << "The total number of all " << categories[3].name << " in " << categories[3].name << " category products in the selected area nowadays = " << categories[3].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4802.            return 0;
4803.        } else if (area_index >= 6 && area_index <= 8) {
4804.            product_index = area_index - 6;
4805.            cout << "The total number of all " << categories[4].name << " in " << categories[4].name << " category products in the selected area nowadays = " << categories[4].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4806.            return 0;
4807.        }
4808.    } else if (category_or_no == "no") {
4809.        if (area_index >= 0 && area_index < 3) {
4810.            product_index = area_index;
4811.            cout << "The total number of all " << categories[0].name << " products in the selected area nowadays = " << categories[0].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4812.            return 0;
4813.        } else if (area_index == 3) {
4814.            product_index = 0;
4815.            cout << "The total number of all " << categories[1].name << " products in the selected area nowadays = " << categories[1].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4816.            return 0;
4817.        } else if (area_index == 4) {
4818.            product_index = 0;
4819.            cout << "The total number of all " << categories[2].name << " products in the selected area nowadays = " << categories[2].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4820.            return 0;
4821.        } else if (area_index == 5) {
4822.            product_index = 0;
4823.            cout << "The total number of all " << categories[3].name << " products in the selected area nowadays = " << categories[3].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4824.            return 0;
4825.        } else if (area_index >= 6 && area_index <= 8) {
4826.            product_index = area_index - 6;
4827.            cout << "The total number of all " << categories[4].name << " products in the selected area nowadays = " << categories[4].factories[factory_index].products[product_index].amount_per_time_period[3] << endl;
4828.            return 0;
4829.        }
4830.    } else if (category_or_no == "q") {
4831.        cout << "Exiting the program..." << endl;
4832.        return 0;
4833.    } else {
4834.        cout << "Unknown command. Exiting the program..." << endl;
4835.        return 0;
4836.    }
4837.}
4838.else if (answer_in_answer15 == "q"){
4839.    cout<<"Exiting the program..."<< endl;
4840.    return 0;
4841.}
4842.else {
4843.    cout<< "Unknown command. Exiting the program..."<< endl;
4844.    return 0;
4845.}
4846.
4847.}}
4848.
4849.          else if (answer_category == "q") {
4850.            break;
4851.        }
4852. else { cout <<"Unknown command" << endl; 
4853.        
4854.        }   
4855.}}
