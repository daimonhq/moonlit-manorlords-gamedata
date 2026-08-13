#ifndef UE4SS_SDK_StoveSDKPlugin_HPP
#define UE4SS_SDK_StoveSDKPlugin_HPP

#include "StoveSDKPlugin_enums.hpp"

struct FPopupUIFrame
{
    FStovePopupControl Control;                                                       // 0x0000 (size: 0x58)
    FString Origin;                                                                   // 0x0058 (size: 0x10)
    FString ResourceKey;                                                              // 0x0068 (size: 0x10)
    int32 ID;                                                                         // 0x0078 (size: 0x4)
    FString URL;                                                                      // 0x0080 (size: 0x10)
    bool bCloseButton;                                                                // 0x0090 (size: 0x1)
    bool bNavigationBar;                                                              // 0x0091 (size: 0x1)
    bool bBackButton;                                                                 // 0x0092 (size: 0x1)
    bool bForwardButton;                                                              // 0x0093 (size: 0x1)
    bool bRefreshButton;                                                              // 0x0094 (size: 0x1)
    bool bHomeButton;                                                                 // 0x0095 (size: 0x1)
    bool bDisallowedButton;                                                           // 0x0096 (size: 0x1)
    bool bUseLoadingAnimation;                                                        // 0x0097 (size: 0x1)
    int32 Days;                                                                       // 0x0098 (size: 0x4)
    FString CloseNormalUrl;                                                           // 0x00A0 (size: 0x10)
    FString CloseNormalId;                                                            // 0x00B0 (size: 0x10)
    FString ClosePressedUrl;                                                          // 0x00C0 (size: 0x10)
    FString ClosePressedId;                                                           // 0x00D0 (size: 0x10)
    int32 CloseType;                                                                  // 0x00E0 (size: 0x4)

}; // Size: 0xE8

struct FStoveAchievement
{
    FString AchievementId;                                                            // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)
    FString DefaultImage;                                                             // 0x0030 (size: 0x10)
    FString AchievedImage;                                                            // 0x0040 (size: 0x10)
    FStoveAchievementCondition Condition;                                             // 0x0050 (size: 0x28)
    int32 Value;                                                                      // 0x0078 (size: 0x4)
    FString status;                                                                   // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FStoveAchievementCondition
{
    int32 GoalValue;                                                                  // 0x0000 (size: 0x4)
    FString ValueOperation;                                                           // 0x0008 (size: 0x10)
    FString Type;                                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FStoveAutoPopup
{
    FString Origin;                                                                   // 0x0000 (size: 0x10)
    int32 ID;                                                                         // 0x0010 (size: 0x4)
    FString URL;                                                                      // 0x0018 (size: 0x10)
    FStovePopupControl Control;                                                       // 0x0028 (size: 0x58)

}; // Size: 0x80

struct FStoveCefCookie
{
    FString Domain;                                                                   // 0x0000 (size: 0x10)
    FString Path;                                                                     // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    FString Value;                                                                    // 0x0030 (size: 0x10)
    bool bHttpOnly;                                                                   // 0x0040 (size: 0x1)
    bool bSecure;                                                                     // 0x0041 (size: 0x1)
    int32 Expiration;                                                                 // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FStoveCefHeader
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStoveCommunityPopup
{
    FString URL;                                                                      // 0x0000 (size: 0x10)
    FStovePopupControl Control;                                                       // 0x0010 (size: 0x58)

}; // Size: 0x68

struct FStoveConfig
{
    FString Env;                                                                      // 0x0000 (size: 0x10)
    FString AppKey;                                                                   // 0x0010 (size: 0x10)
    FString SecretKey;                                                                // 0x0020 (size: 0x10)
    FString GameId;                                                                   // 0x0030 (size: 0x10)
    int32 LogLevel;                                                                   // 0x0040 (size: 0x4)
    FString LogPath;                                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FStoveCouponPopup
{
    FString URL;                                                                      // 0x0000 (size: 0x10)
    FStovePopupControl Control;                                                       // 0x0010 (size: 0x58)

}; // Size: 0x68

struct FStoveCustomEvent
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Category1;                                                                // 0x0010 (size: 0x10)
    FString Category2;                                                                // 0x0020 (size: 0x10)
    float SimpleValue;                                                                // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FStoveCustomEventParameter
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStoveError
{
    int32 FunctionType;                                                               // 0x0000 (size: 0x4)
    FStoveResult ErrorResult;                                                         // 0x0004 (size: 0x4)
    FString Message;                                                                  // 0x0008 (size: 0x10)
    int32 ExternalError;                                                              // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FStoveInventoryItem
{
    int64 TransactionMasterNo;                                                        // 0x0000 (size: 0x8)
    int64 TransactionDetailNo;                                                        // 0x0008 (size: 0x8)
    int64 ProductId;                                                                  // 0x0010 (size: 0x8)
    FString GameItemId;                                                               // 0x0018 (size: 0x10)
    FString ProductName;                                                              // 0x0028 (size: 0x10)
    int32 Quantity;                                                                   // 0x0038 (size: 0x4)
    FString ThumbnailUrl;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FStoveManualPopup
{
    FString Origin;                                                                   // 0x0000 (size: 0x10)
    FString ResourceKey;                                                              // 0x0010 (size: 0x10)
    int32 ID;                                                                         // 0x0020 (size: 0x4)
    FString URL;                                                                      // 0x0028 (size: 0x10)
    FStovePopupControl Control;                                                       // 0x0038 (size: 0x58)

}; // Size: 0x90

struct FStoveNewsPopup
{
    FString Origin;                                                                   // 0x0000 (size: 0x10)
    int32 ID;                                                                         // 0x0010 (size: 0x4)
    FString URL;                                                                      // 0x0018 (size: 0x10)
    FStovePopupControl Control;                                                       // 0x0028 (size: 0x58)

}; // Size: 0x80

struct FStoveOrderProduct
{
    int64 ProductId;                                                                  // 0x0000 (size: 0x8)
    double SalePrice;                                                                 // 0x0008 (size: 0x8)
    int32 Quantity;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FStoveOverImmersion
{
    FString Message;                                                                  // 0x0000 (size: 0x10)
    int32 ElapsedTimeInHours;                                                         // 0x0010 (size: 0x4)
    int32 MinExposureTimeInSeconds;                                                   // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FStoveOwnership
{
    FString GameId;                                                                   // 0x0000 (size: 0x10)
    int32 GameCode;                                                                   // 0x0010 (size: 0x4)
    int32 OwnershipCode;                                                              // 0x0014 (size: 0x4)
    uint64 PurchaseDate;                                                              // 0x0018 (size: 0x8)
    uint64 MemberNo;                                                                  // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FStovePopupControl
{
    FStovePopupControlUI UI;                                                          // 0x0000 (size: 0x58)

}; // Size: 0x58

struct FStovePopupControlUI
{
    FStovePopupControlUIVisible Visible;                                              // 0x0000 (size: 0x7)
    int32 DisallowedDay;                                                              // 0x0008 (size: 0x4)
    FStovePopupControlUICloseButtonImage CloseButtonImage;                            // 0x0010 (size: 0x48)

}; // Size: 0x58

struct FStovePopupControlUICloseButtonImage
{
    FStovePopupControlUICloseButtonImageDetail Normal;                                // 0x0000 (size: 0x20)
    FStovePopupControlUICloseButtonImageDetail Pressed;                               // 0x0020 (size: 0x20)
    int32 Type;                                                                       // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FStovePopupControlUICloseButtonImageDetail
{
    FString FileUrl;                                                                  // 0x0000 (size: 0x10)
    FString FileId;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStovePopupControlUIVisible
{
    bool CloseButton;                                                                 // 0x0000 (size: 0x1)
    bool NavigationBar;                                                               // 0x0001 (size: 0x1)
    bool BackButton;                                                                  // 0x0002 (size: 0x1)
    bool ForwardButton;                                                               // 0x0003 (size: 0x1)
    bool RefreshButton;                                                               // 0x0004 (size: 0x1)
    bool HomeButton;                                                                  // 0x0005 (size: 0x1)
    bool DisallowedButton;                                                            // 0x0006 (size: 0x1)

}; // Size: 0x7

struct FStovePopupRequestCookie
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStovePopupRequestHeader
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStoveProduct
{
    int64 ProductId;                                                                  // 0x0000 (size: 0x8)
    FString GameItemId;                                                               // 0x0008 (size: 0x10)
    FString Name;                                                                     // 0x0018 (size: 0x10)
    FString Description;                                                              // 0x0028 (size: 0x10)
    int32 Quantity;                                                                   // 0x0038 (size: 0x4)
    uint16 ProductTypeCode;                                                           // 0x003C (size: 0x2)
    FString CategoryId;                                                               // 0x0040 (size: 0x10)
    FString CurrencyCode;                                                             // 0x0050 (size: 0x10)
    double Price;                                                                     // 0x0060 (size: 0x8)
    double DisplayPrice;                                                              // 0x0068 (size: 0x8)
    FString DisplayPriceString;                                                       // 0x0070 (size: 0x10)
    double SalePrice;                                                                 // 0x0080 (size: 0x8)
    double DisplaySalePrice;                                                          // 0x0088 (size: 0x8)
    FString DisplaySalePriceString;                                                   // 0x0090 (size: 0x10)
    bool bIsDiscount;                                                                 // 0x00A0 (size: 0x1)
    uint16 DiscountType;                                                              // 0x00A2 (size: 0x2)
    int32 DiscountTypeValue;                                                          // 0x00A4 (size: 0x4)
    uint64 DiscountBeginDate;                                                         // 0x00A8 (size: 0x8)
    uint64 DiscountEndDate;                                                           // 0x00B0 (size: 0x8)
    int32 TotalQuantity;                                                              // 0x00B8 (size: 0x4)
    int32 MemberQuantity;                                                             // 0x00BC (size: 0x4)
    int32 GuidQuantity;                                                               // 0x00C0 (size: 0x4)
    FString ThumbnailUrl;                                                             // 0x00C8 (size: 0x10)
    bool bCanWithdraw;                                                                // 0x00D8 (size: 0x1)

}; // Size: 0xE0

struct FStovePurchase
{
    int64 TransactionMasterNo;                                                        // 0x0000 (size: 0x8)
    FString TempPaymentUrl;                                                           // 0x0008 (size: 0x10)
    int32 PurchaseProgress;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FStovePurchaseProduct
{
    int64 ProductId;                                                                  // 0x0000 (size: 0x8)
    FString CategoryId;                                                               // 0x0008 (size: 0x10)
    int32 TotalQuantity;                                                              // 0x0018 (size: 0x4)
    int32 MemberQuantity;                                                             // 0x001C (size: 0x4)
    int32 GuidQuantity;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FStovePurchaseVerification
{
    FStoveResult ErrorResult;                                                         // 0x0000 (size: 0x4)
    bool IsPurchased;                                                                 // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FStoveRank
{
    uint64 MemberNo;                                                                  // 0x0000 (size: 0x8)
    int32 Score;                                                                      // 0x0008 (size: 0x4)
    uint32 Rank;                                                                      // 0x000C (size: 0x4)
    FString Nickname;                                                                 // 0x0010 (size: 0x10)
    FString ProfileImage;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FStoveResult
{
    int32 Result;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FStoveShopCategories
{
    FString CategoryId;                                                               // 0x0000 (size: 0x10)
    FString ParentCategoryId;                                                         // 0x0010 (size: 0x10)
    int32 DisplayNo;                                                                  // 0x0020 (size: 0x4)
    FString Name;                                                                     // 0x0028 (size: 0x10)
    int32 Depth;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FStoveShutdown
{
    int32 InAdvanceTimeInMinutes;                                                     // 0x0000 (size: 0x4)
    FString Message;                                                                  // 0x0008 (size: 0x10)
    int32 ExposureTimeInSeconds;                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FStoveStat
{
    FStoveStatFullId StatFullId;                                                      // 0x0000 (size: 0x20)
    int32 CurrentValue;                                                               // 0x0020 (size: 0x4)
    uint64 MemberNo;                                                                  // 0x0028 (size: 0x8)
    uint64 UpdatedAt;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FStoveStatFullId
{
    FString GameId;                                                                   // 0x0000 (size: 0x10)
    FString StatId;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStoveStatValue
{
    int32 CurrentValue;                                                               // 0x0000 (size: 0x4)
    bool bUpdated;                                                                    // 0x0004 (size: 0x1)
    FString ErrorMessage;                                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FStoveState
{
    int32 State;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FStoveTermsAgreement
{
    FString GameId;                                                                   // 0x0000 (size: 0x10)
    bool Result;                                                                      // 0x0010 (size: 0x1)
    FString Region;                                                                   // 0x0018 (size: 0x10)
    FString AgreementUrl;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FStoveToken
{
    FString AccessToken;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStoveTraceHint
{
    FStoveResult ErrorResult;                                                         // 0x0000 (size: 0x4)
    FString SessionId;                                                                // 0x0008 (size: 0x10)
    FString RefSessionId;                                                             // 0x0018 (size: 0x10)
    FString UUID;                                                                     // 0x0028 (size: 0x10)
    FString ServiceProtocol;                                                          // 0x0038 (size: 0x10)
    FString RefSourceType;                                                            // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FStoveUser
{
    uint64 MemberNo;                                                                  // 0x0000 (size: 0x8)
    FString Nickname;                                                                 // 0x0008 (size: 0x10)
    FString GameUserId;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

class UStoveSDKObject : public UObject
{
    class UStoveSDKPopup* _PopupWidget;                                               // 0x0030 (size: 0x8)

    FStovePurchaseVerification StoveSDKVerifyPurchase(FString CategoryId, FString ProductId);
    FStoveResult StoveSDKUnInit();
    FString StoveSDKTranslateLanguage(FString Original);
    FStoveResult StoveSDKStashCustomEvent(FString Name, FString Category1, FString Category2, FString SimpleValue, const TArray<FStoveCustomEventParameter> params, int32 ParamSize);
    FStoveResult StoveSDKStartPurchase(const TArray<FStoveOrderProduct> Products, const int32 ProductSize);
    FStoveResult StoveSDKSetStat(FString StatId, const int32 StatValue);
    FStoveResult StoveSDKSetPopupDisallowed(const int32 PopupId, const int32 Days);
    FStoveResult StoveSDKSetLanguage(FString Language);
    FStoveResult StoveSDKSetGameProfile(FString WorldId, FString CharactorNo);
    FStoveResult StoveSDKInit(const FStoveConfig& Config);
    FStoveResult StoveSDKIAPInit(FString ShopKey);
    FStoveResult StoveSDKGetUser();
    FStoveTraceHint StoveSDKGetTraceHint();
    FStoveResult StoveSDKGetToken();
    FStoveResult StoveSDKGetStat(FString StatId);
    FString StoveSDKGetSDKVersion();
    FStoveResult StoveSDKGetRank(FString LeaderboardId, const int32 PageIndex, const int32 PageSize, bool IncludeMyRank);
    FStoveResult StoveSDKGetOwnership();
    FStoveResult StoveSDKGetNewsPopup();
    FStoveResult StoveSDKGetManualPopup(FString ResourceKey);
    FStoveState StoveSDKGetInitState();
    FStoveResult StoveSDKGetCouponPopup();
    FStoveResult StoveSDKGetCommunityPopup();
    FStoveResult StoveSDKGetAutoPopup();
    FStoveResult StoveSDKGetAllAchievement();
    FStoveResult StoveSDKGetAchievement(FString AchievementId);
    FStoveResult StoveSDKFetchTermsAgreement();
    FStoveResult StoveSDKFetchShopCategories();
    FStoveResult StoveSDKFetchProducts(FString CategoryId, const bool IsRefresh);
    FStoveResult StoveSDKFetchInventory();
    FStoveResult StoveSDKConfirmPurchase(FString TransactionMasterNo);
}; // Size: 0x38

class UStoveSDKPopup : public UUserWidget
{
}; // Size: 0x4D0

#endif
