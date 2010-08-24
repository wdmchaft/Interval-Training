//
//  note.h
//  NoteToFreq
//
//  Created by Sam on 7/31/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface Note : NSObject {
	
	float hertz;
	NSString *noteName;
	
	// The actual samples
	SystemSoundID wholeSample;
	SystemSoundID halfSample;
	SystemSoundID quarterSample;
	SystemSoundID eighthSample;
	SystemSoundID sixteenthSample;
}

@property (nonatomic) float hertz;
@property (nonatomic, copy) NSString *noteName;

-(id)initWithNoteName:(NSString *)_noteName withHertz:(float)_hertz;

-(void) playNote:(NSString *)theNote; // does a switch to pick the right note playback

// Functions to play the samples
-(void) playWhole;
-(void) playHalf;
-(void) playQuarter;
-(void) playEighth;
-(void) playSixteenth;

@end
