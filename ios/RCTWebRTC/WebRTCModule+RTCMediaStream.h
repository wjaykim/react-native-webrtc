#import "CaptureController.h"
#import "WebRTCModule.h"
#import "VideoEffectProcessor.h"

@interface WebRTCModule (RTCMediaStream)

@property (nonatomic, strong) VideoEffectProcessor *videoEffectProcessor;

- (RTCVideoTrack *)createVideoTrackWithCaptureController:
    (CaptureController * (^)(RTCVideoSource *))captureControllerCreator;
- (NSArray *)createMediaStream:(NSArray<RTCMediaStreamTrack *> *)tracks;

- (RTCMediaStreamTrack *)trackForId:(nonnull NSString *)trackId pcId:(nonnull NSNumber *)pcId;
@end
