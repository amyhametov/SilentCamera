//
//  SZViewController.h
//  testCamera
//
//  Created by Andrey Mukhametov on 11.06.13.
//  Copyright (c) 2013 Andrey Mukhametov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CoreMedia.h>
#import <ImageIO/CGImageProperties.h>

@interface SZViewController : UIViewController{
    AVCaptureStillImageOutput    *stillImageOutput;
}

@property(nonatomic, retain) IBOutlet UIView *          vImagePreview;
@property(nonatomic, retain) IBOutlet UIImageView *     vImage;

@end
