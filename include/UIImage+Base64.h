
#import <UIKit/UIKit.h>

@interface UIImage (Base64)

-(UIImage*)imageFromBase64String:(NSString*)string;
-(NSString*)base64StringFromUIImage:(UIImage*)image;

@end