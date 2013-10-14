/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOLocalizedName : PBCodable <NSCopying> {
    NSString *_languageCode;
    NSString *_name;
    unsigned int _nameRank;
    NSString *_nameType;
    NSString *_phoneticName;
    BOOL _isDefault;
    struct { 
        unsigned int nameRank : 1; 
        unsigned int isDefault : 1; 
    } _has;
}

@property BOOL hasIsDefault;
@property BOOL isDefault;
@property(readonly) BOOL hasLanguageCode;
@property(retain) NSString * languageCode;
@property(readonly) BOOL hasNameType;
@property(retain) NSString * nameType;
@property(readonly) BOOL hasName;
@property(retain) NSString * name;
@property BOOL hasNameRank;
@property unsigned int nameRank;
@property(readonly) BOOL hasPhoneticName;
@property(retain) NSString * phoneticName;


- (void)setHasNameRank:(BOOL)arg1;
- (void)setHasIsDefault:(BOOL)arg1;
- (void)setNameRank:(unsigned int)arg1;
- (unsigned int)nameRank;
- (BOOL)hasNameRank;
- (id)nameType;
- (BOOL)hasNameType;
- (BOOL)hasLanguageCode;
- (void)setIsDefault:(BOOL)arg1;
- (BOOL)isDefault;
- (BOOL)hasIsDefault;
- (void)setNameType:(id)arg1;
- (id)phoneticName;
- (BOOL)hasPhoneticName;
- (void)setPhoneticName:(id)arg1;
- (BOOL)hasName;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)languageCode;
- (id)dictionaryRepresentation;
- (void)setName:(id)arg1;

@end