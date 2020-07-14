//
//  ViewController.h
//  滚动视图的高级功能
//
//  Created by 张立远 on 2020/7/13.
//  Copyright © 2020 张立远. All rights reserved.
//

#import <UIKit/UIKit.h>

//当前视图控制器要实现协议UIScrollView的协议函数
@interface ViewController : UIViewController<UIScrollViewDelegate>{
    //定义一个滚动视图成员变量
    UIScrollView* _scrollView;
}


@end

