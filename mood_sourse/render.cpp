#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
---
title: 说说
date:
layout: mood
---

<div class="mood_piece" style="border-top:2px solid #6F3381"><span class="mood_date" style="background-color: #6F3381;border-right-color: #6F3381">2018-05-18</span><div class="mood_content"><p>新的说说系统上线了！目测这里会是我常更新<del>废话</del>的地方，欢迎大家常来哦！
以及针对单个说说的评论系统实现起来貌似不太简单. . .所以短期内说说页是不会有评论系统的。不过大家还是可以没事来逛逛哦o(〃'▽'〃)o</p></div></div>
*/


int main() {
	ofstream out("../source/mood/index.md");
	out << "---\ntitle: 心情\nlayout: mood\n---" << endl << endl;
	ifstream in;
	ifstream max_in("max.txt");
	int i = 0;
	max_in >> i;
	max_in.close();
	while (true) {
		in.open("text/" + to_string(i--) + ".txt");
		if (!in.is_open()) {
			break;
		}
		string color;
		in >> color;
		string time;
		in >> time;
		streampos now = in.tellg();
		in.seekg(0, in.end);
		int length = in.tellg() - now - 1;
		in.seekg(now);
		in.get();
		char * buffer = new char[length+1];
		in.read(buffer, length);
		buffer[length] = '\0';
		out << "<div class='mood_piece' style='border-top:2px solid " << color << "'><span class='mood_date' style='background-color: " << color << "; border-right-color:" << color << "'>" << time << "</span><div class='mood_content'><p>" << buffer << "</p></div></div>";
		delete[] buffer;
		in.close();
	}
	return 0;
}