RunLoop-用来演示RunLoop用法的Demo

下图是苹果官方给出的 RunLoop 模型图
![image](https://github.com/ZongAng123/RunLoop/blob/master/1558405990555045.png)

从上图中可以看出，RunLoop 就是线程中的一个循环，RunLoop 会在循环中会不断检测，通过 Input sources（输入源）和 Timer sources（定时源）两种来源等待接受事件；然后对接受到的事件通知线程进行处理，并在没有事件的时候让线程进行休息。

2. RunLoop 相关类


下面我们来了解一下Core Foundation框架下关于 RunLoop 的 5 个类，只有弄懂这几个类的含义，我们才能深入了解 RunLoop 的运行机制。

CFRunLoopRef：代表 RunLoop 的对象

CFRunLoopModeRef：代表 RunLoop 的运行模式

CFRunLoopSourceRef：就是 RunLoop 模型图中提到的输入源 / 事件源

CFRunLoopTimerRef：就是 RunLoop 模型图中提到的定时源

CFRunLoopObserverRef：观察者，能够监听 RunLoop 的状态改变

