/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPShieldIndexEntry : PBCodable  {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _shieldTypes;
    NSString *_artworkIdentifier;
}

@property(readonly) BOOL hasArtworkIdentifier;
@property(retain) NSString * artworkIdentifier;
@property(readonly) unsigned int shieldTypesCount;
@property(readonly) int* shieldTypes;


- (void)setShieldTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)addShieldTypes:(int)arg1;
- (int)shieldTypesAtIndex:(unsigned int)arg1;
- (void)clearShieldTypes;
- (BOOL)hasArtworkIdentifier;
- (void)setArtworkIdentifier:(id)arg1;
- (id)artworkIdentifier;
- (int*)shieldTypes;
- (unsigned int)shieldTypesCount;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end