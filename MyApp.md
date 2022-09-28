# 结对编程：小学四则运算

## 目录

[toc]

### 作业详情

| 作业所属课程 | [软件工程](https://bbs.csdn.net/forums/gdut-ryuezh?typeId=33729)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| ------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 作业要求     | [结对编程：小学四则运算](https://bbs.csdn.net/topics/608268113)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| 作业目标     | 使用C++实现小学四则运算系统                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| 参考文献     | [C++输出数据到txt文本方法](https://blog.csdn.net/weixin_45770896/article/details/125854735?ops_request_misc=&request_id=&biz_id=102&utm_term=C++%E6%80%8E%E4%B9%88%E5%B0%86%E7%BB%93%E6%9E%9C%E8%BE%93%E5%87%BA%E5%88%B0txt&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-125854735.142^v50^pc_rank_34_2,201^v3^control_1&spm=1018.2226.3001.4187)                                                          [代码作业——四则运算（二）](https://blog.csdn.net/weixin_30840253/article/details/98111678?ops_request_misc=&request_id=&biz_id=102&utm_term=%E5%9B%9B%E5%88%99%E8%BF%90%E7%AE%97%E9%A2%98%E7%9B%AE%E9%81%BF%E5%85%8D%E9%87%8D%E5%A4%8D&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-6-98111678.142^v50^pc_rank_34_2,201^v3^control_1&spm=1018.2226.3001.4187) |
| 结队人员             |张琳英、布麦日耶木                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |





### PSP表格

| PSP2.1                                  | Personal Software Process Stages        | 预估耗时（分钟） | 实际耗时（分钟） |
| --------------------------------------- | --------------------------------------- | ---------------- | ---------------- |
| Planning                                | 计划                                    |                  |                  |
| · Estimate                              | · 估计这个任务需要多少时间              |    5              |       5           |
| Development                             | 开发                                    |                  |                  |
| · Analysis                              | · 需求分析 (包括学习新技术)             |     60            |       60           |
| · Design Spec                           | · 生成设计文档                          |      30            |       30           |
| · Design Review                         | · 设计复审(和同事审核设计文档)                              |      5            |       5           |
| · Coding Standard                       | · 代码规范 (为目前的开发制定合适的规范) |       5           |     5             |
| · Design                                | · 具体设计                              |       30           |40                  |
| · Coding                                | · 具体编码                              |    240              |360                  |
| · Code Review                           | · 代码复审                              |  10                |10                  |
| · Test                                  | · 测试（自我测试，修改代码，提交修改）  |     20             |        20          |
| Reporting                               | 报告                                    |                  |                  |
| · Test Repor                            | · 测试报告                              |      20            |40                  |
| · Size Measurement                      | · 计算工作量                            |       5           |         5         |
| · Postmortem & Process Improvement Plan | · 事后总结, 并提出过程改进计划          |       10           | 10                 |
|                                         | · 合计                                  |      440            |  590                |

### 设计思路

![](https://b0.bdstatic.com/ugc/9Ch2If1pzelH-S5oRWC8Hgc2bacb820016bb1ea423cc4cc641859b.jpg?x-bce-process=image/watermark,image_NDU0ZjAyZDU5YjQ1LnBuZw==,bucket_searchbox,w_5,text_QGJpdHRlcm1lbG9uMjk=,type_RlpMYW5UaW5nSGVp,size_5,x_3,y_3,interval_4,color_FFFFFF,effect_softoutline,shc_000000,blr_2,align_1)


### 模块展示

##### 将数据写入txt文件
	
	ofstream outfile;//向txt文档中写入答案 
	outfile.open("Answers.txt",ofstream::app); 
  
	ofstream dataFile;//向txt文档中写入算数题目
	dataFile.open("Exercises.txt",ofstream::app);
	

##### 系统变量定义

  
	int e1,e2,e3,e4,t,fh;//定义随机数及算数符号
	int n;//题目数量
	char fhchose;//算数符号选择
	int fhnum;//算数符号数量
	int r;//取值范围
	srand((unsigned)time(0));//srand函数是以现在系统时间作为 时间种子产生随机数
	cout << "\n ~~~~~~~欢迎使用小学生四则运算系统~~~~~~~ \n";
	cout << "\n *请输入题目数量：";
	cin >> n;
	cout << "\n *请选择是否有乘除法（y/n）：";
	cin >> fhchose;
	cout << "\n *请输入算数符号数量(1~3)：";
	cin >> fhnum;
	cout << "\n *请输入一个值确定算式中数值取值范围：";
	cin >> r;
	cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";

### 测试运行

![](https://b0.bdstatic.com/ugc/9Ch2If1pzelH-S5oRWC8Hg10e1c258bee45e2c00041b0337b2b06a.jpg?x-bce-process=image/watermark,image_NDU0ZjAyZDU5YjQ1LnBuZw==,bucket_searchbox,w_34,text_QGJpdHRlcm1lbG9uMjk=,type_RlpMYW5UaW5nSGVp,size_34,x_23,y_23,interval_4,color_FFFFFF,effect_softoutline,shc_000000,blr_2,align_1)

![](https://b0.bdstatic.com/ugc/9Ch2If1pzelH-S5oRWC8Hgb009c02e676020aeac6a33842575fda6.jpg?x-bce-process=image/watermark,image_NDU0ZjAyZDU5YjQ1LnBuZw==,bucket_searchbox,w_26,text_QGJpdHRlcm1lbG9uMjk=,type_RlpMYW5UaW5nSGVp,size_26,x_17,y_17,interval_4,color_FFFFFF,effect_softoutline,shc_000000,blr_2,align_1)

![](https://b0.bdstatic.com/ugc/9Ch2If1pzelH-S5oRWC8Hg345d1a842664b2f81ee3af71fa7e6ea5.jpg?x-bce-process=image/watermark,image_NDU0ZjAyZDU5YjQ1LnBuZw==,bucket_searchbox,w_26,text_QGJpdHRlcm1lbG9uMjk=,type_RlpMYW5UaW5nSGVp,size_26,x_17,y_17,interval_4,color_FFFFFF,effect_softoutline,shc_000000,blr_2,align_1)

##### 运行多次后

![](https://b0.bdstatic.com/ugc/9Ch2If1pzelH-S5oRWC8Hg1fa952d9924d7450bb0318ad097cc1d1.jpg?x-bce-process=image/watermark,image_NDU0ZjAyZDU5YjQ1LnBuZw==,bucket_searchbox,w_27,text_QGJpdHRlcm1lbG9uMjk=,type_RlpMYW5UaW5nSGVp,size_27,x_18,y_18,interval_4,color_FFFFFF,effect_softoutline,shc_000000,blr_2,align_1)

![](https://b0.bdstatic.com/ugc/9Ch2If1pzelH-S5oRWC8Hgb38290bedc9a26939d6989c2f3968524.jpg?x-bce-process=image/watermark,image_NDU0ZjAyZDU5YjQ1LnBuZw==,bucket_searchbox,w_27,text_QGJpdHRlcm1lbG9uMjk=,type_RlpMYW5UaW5nSGVp,size_27,x_18,y_18,interval_4,color_FFFFFF,effect_softoutline,shc_000000,blr_2,align_1)

### 总结

这次双人编程作业难度不算太大，但是由于个人能力范围，有些功能还不算齐全，比如，查询答案正确个数且显示正确题目号以及错误个数和错误题号功能还未能编写成功。

### Github地址：https://github.com/WhoisZhang
