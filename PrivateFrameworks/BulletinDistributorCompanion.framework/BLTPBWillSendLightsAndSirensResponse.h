/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int willSend : 1; 
    }  _has;
    bool  _willSend;
}

@property (nonatomic) bool hasWillSend;
@property (nonatomic) bool willSend;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWillSend;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWillSend:(bool)arg1;
- (void)setWillSend:(bool)arg1;
- (bool)willSend;
- (void)writeTo:(id)arg1;

@end
