#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdMelAudioPlugin : NSObject

+ (void)initializePlugin;
+ (void)playAudio:(const char *)audioPath;
+ (void)stopAudio;
+ (BOOL)isPlaying;
+ (float)getCurrentPosition;
+ (float)getDuration;
+ (float)getProgress;
+ (float)getCurrentVolume;
+ (void)setVolume:(float)volume;
+ (void)lowerVolume:(float)duration;
+ (void)restoreVolume:(float)duration;
+ (float)getMaxVolume;

@end

NS_ASSUME_NONNULL_END
