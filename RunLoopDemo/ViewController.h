//
//  ViewController.h
//  RunLoopDemo
//
//  Created by 纵昂 on 2019/5/21.
//  Copyright © 2019 GitHub:https://github.com/ZongAng123. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end

/**
 RunLoop 实际上是一个对象，这个对象在循环中用来处理程序运行过程中出现的各种事件（比如说触摸事件、UI刷新事件、定时器事件、Selector事件），从而保持程序的持续运行。
 
 RunLoop 在没有事件处理的时候，会使线程进入睡眠模式，从而节省 CPU 资源，提高程序性能。
 
 1.3 默认情况下主线程的 RunLoop 原理
 我们在启动一个iOS程序的时候，系统会调用创建项目时自动生成的 main.m 的文件。main.m文件如下所示
 int main(int argc, char * argv[]) {
 @autoreleasepool {
 return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
 }
 }
 其中 UIApplicationMain 函数内部帮我们开启了主线程的 RunLoop，UIApplicationMain 内部拥有一个无限循环的代码，只要程序不退出/崩溃，它就一直循环
 int main(int argc, char * argv[]) {
 BOOL running = YES;
 do {
 // 执行各种任务，处理各种事件
 // ......
 } while (running);  // 判断是否需要退出
 return 0;
 }
 
 
 
 **/
