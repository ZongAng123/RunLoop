RunLoop-用来演示RunLoop用法的Demo
下图是苹果官方给出的 RunLoop 模型图
![image](https://github.com/ZongAng123/RunLoop/blob/master/1558405990555045.png)
从上图中可以看出，RunLoop 就是线程中的一个循环，RunLoop 会在循环中会不断检测，通过 Input sources（输入源）和 Timer sources（定时源）两种来源等待接受事件；然后对接受到的事件通知线程进行处理，并在没有事件的时候让线程进行休息。
