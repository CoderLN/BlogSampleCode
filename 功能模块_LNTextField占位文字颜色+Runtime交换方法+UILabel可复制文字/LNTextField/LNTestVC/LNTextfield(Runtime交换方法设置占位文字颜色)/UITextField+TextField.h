/*
 * File:  UITextField+TextField.h
 * Public_CoderLN
 *
 *【Runtime 交换方法 -> textField.placeholderColor】
 * 更多好用工具类,关注我GitHub -> Tools
 */

#import <UIKit/UIKit.h>
#import <objc/message.h>

@interface UITextField (TextField)

/*
 *【设置占位文字的颜色】
 * @param placeholderColor  占位文字的颜色
 */
@property UIColor *placeholderColor;


/*
 *【runtime交换方法(修改UITextField的占位文字，且设置文字和文字颜色是无序的)】
 * @param placeholder       占位文字
 */
- (void)setLN_Placeholder:(NSString *)placeholder;

@end
