/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinUpdateAdd : BBObserverBulletinUpdate {
    BOOL  _shouldPlayLightsAndSirens;
}

@property (nonatomic, readonly) BOOL shouldPlayLightsAndSirens;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned int)arg3;
- (id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned int)arg3 shouldPlayLightsAndSirens:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldPlayLightsAndSirens;

@end