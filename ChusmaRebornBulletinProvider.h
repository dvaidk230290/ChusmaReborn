#import <BulletinBoard/BBDataProvider.h>

@class BBSectionInfo;

@interface ChusmaRBulletinProvider : BBDataProvider <BBDataProvider>
+ (instancetype)sharedInstance;
- (void)showBulletin:(BOOL)isFriend;
- (BBSectionInfo *)sectionInfo;
@end
