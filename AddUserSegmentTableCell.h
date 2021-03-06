//
//  AddUserSegmentTableCell.h
//  hLog
//
//  Created by Bhoomi on 3/28/09.
//  Copyright 2009 4th Main Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HealthTrackerAppDelegate.h"

@interface AddUserSegmentTableCell : UITableViewCell {

	UILabel *lblName;
	UISegmentedControl *BtnSelect;
	HealthTrackerAppDelegate *App;
}

@property(nonatomic,retain) UILabel *lblName;
@property(nonatomic,retain) UISegmentedControl *BtnSelect;

-(UILabel *)newLabelWithPrimaryColor:(UIColor *)primaryColor selectedColor:(UIColor *)selectedColor fontSize:(CGFloat)fontSize bold:(BOOL)bold;

@end
