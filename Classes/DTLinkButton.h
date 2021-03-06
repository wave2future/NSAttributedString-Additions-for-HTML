//
//  DTLinkButton.h
//  CoreTextExtensions
//
//  Created by Oliver Drobnik on 1/16/11.
//  Copyright 2011 Drobnik.com. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DTLinkButton : UIButton 
{
	NSURL *_url;
    NSString *_guid;
}

@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *guid;

@end
