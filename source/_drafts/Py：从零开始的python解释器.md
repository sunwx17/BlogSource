---
title: Py：从零开始的python解释器
category: 技术向
id: py_zerogarahajimero_python_interpreter
thumbnail: >-
  https://picture-1256084113.cos.ap-beijing.myqcloud.com/blog/py_zerogarahajimero_python_interpreter/thumbnail.jpg
tags:
  - python
  - C++
  - 大作业
abbrlink: 5353
date: 2018-07-18 07:27:00
---

&emsp;   虽然看上去是写个解释器这么个高大上的东西，但毕竟只是一个OOP作业，
<!-- more -->

<h2 id="h2_1"> <i class="fa fa-leaf" aria-hidden="true"></i> 写在前面的话 </h2>

&emsp;   本文虽然是关于写一个python解释器，但**不涉及**任何编译原理以及语法分析体系。一切都是一个普通大一学生的笨拙的思考，知识水平非常低下，完全是站在很低的观点上思考问题，可能不会对读者有任何观点上的启发。

&emsp;   阅读本文，你仅需要了解C++的主要语法、`STL`的基本使用、`regex`正则表达式的基本使用(这一部分我会在文中给出)。

&emsp;   [这里是项目地址](https://github.com/sunwx17/OOPython)，事实上，相当部分的代码非常丑陋，所以大家可以选择忽略掉它(手动滑稽)。