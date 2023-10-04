# KiemThuDongDieuKhien
Xây dựng Test Case:
Tid	Path	Test Case	Expected Output
1	0-1-2(F)-12-13	check(1,2,3)	Khong phai tam giac
2	0-1-2(T)-3(T)-4-13	check(3,4,5)	Tam giac vuong
3	0-1-2(T)-3(F)-5(T)-6-13	check(3,3,3)	Tam giac deu
4	0-1-2(T)-3(F)-5(F)-7(T)-8-13	check(1,3,3)	Tam giac can
5	0-1-2(T)-3(F)-5(F)-7(F)-9(T)-10-13	check(6,4,3)	Tam giac tu
6	0-1-2(T)-3(F)-5(F)-7(F)-9(F)-11-13	check(9,10,7)	Tam giac nhon
Kết quả kiểm thử:
Tid	Test Case	Expected Output	Output	Status
1	check(1,2,3)	Khong phai tam giac	Khong phai tam giac	Pass
2	check(3,4,5)	Tam giac vuong	Tam giac vuong	Pass
3	check(3,3,3)	Tam giac deu	Tam giac deu	Pass
4	check(1,3,3)	Tam giac can	Tam giac can	Pass
5	check(6,4,3)	Tam giac tu	Tam giac tu	Pass
6	check(9,10,7)	Tam giac nhon	Tam giac nhon	Pass
