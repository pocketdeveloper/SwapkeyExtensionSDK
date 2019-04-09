// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SwapkeyExtensionSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK10APIManager")
@interface APIManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK10APIRequest")
@interface APIRequest : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class KeyButton;
@class UIButton;
@class NSCoder;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK15AlphaKeyboardUI")
@interface AlphaKeyboardUI : UIView
@property (nonatomic, weak) IBOutlet KeyButton * _Null_unspecified btnShift;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnSwap;
- (IBAction)showSwap:(id _Nonnull)sender;
- (IBAction)openSwap:(id _Nonnull)sender;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UILabel;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK16AmountKeyboardUI")
@interface AmountKeyboardUI : UIView
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblAmount;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnContinue;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblError;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblGeneralTitle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnHistory;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnDelete;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn0;
- (IBAction)showHistory:(id _Nonnull)sender;
- (IBAction)didTapKey:(id _Nonnull)sender;
- (IBAction)deleteAmount:(id _Nonnull)sender;
- (IBAction)nextStep;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIScrollView;
@class UIActivityIndicatorView;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK9HistoryUI")
@interface HistoryUI : UIView
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnBack;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblTitle;
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified scroll;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activity;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblMessage;
- (IBAction)backToAmount:(id _Nonnull)sender;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK9KeyButton")
@interface KeyButton : UIButton
@property (nonatomic, strong) IBOutlet AlphaKeyboardUI * _Null_unspecified delegate;
- (void)drawRect:(CGRect)rect;
- (void)longDelete;
- (void)startTimer;
- (void)stopTimer;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK10NoAccessUI")
@interface NoAccessUI : UIView
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblTittle;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblMessage;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activity;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnOpenApp;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified logoSwap;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblPoweredBy;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imgLogo;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblVersion;
- (IBAction)openApp:(id _Nonnull)sender;
- (BOOL)openURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK17NumericKeyboardUI")
@interface NumericKeyboardUI : UIView
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnSend;
- (IBAction)didTapNumber:(id _Nonnull)sender;
- (IBAction)didDelete:(id _Nonnull)sender;
- (IBAction)didTapPoint:(id _Nonnull)sender;
- (IBAction)openSwap:(id _Nonnull)sender;
- (IBAction)showPayment:(id _Nonnull)sender;
- (BOOL)openURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK15ResultPaymentUI")
@interface ResultPaymentUI : UIView
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewInfo;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblTitle;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblAmount;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnDown;
- (IBAction)hideResult:(id _Nonnull)sender;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIColor;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK9SKEColors")
@interface SKEColors : NSObject
+ (UIColor * _Nonnull)backgroundCustomColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)amountsColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)activityColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)genaralTitlesColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)btnActiveBackgroundColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)btnActiveFontColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nullable)customButtonsTintColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nullable)customKeyboardTintColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)lblTitleColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)lblNormalColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)errorColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)stripeCardBackgroundColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)stripeCardTextColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)paidColor SWIFT_WARN_UNUSED_RESULT;
+ (UIColor * _Nonnull)pendingColor SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK10SKEConfigs")
@interface SKEConfigs : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK9SKECrypto")
@interface SKECrypto : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK6SKELog")
@interface SKELog : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK11SKELogEvent")
@interface SKELogEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK14SKEPreferences")
@interface SKEPreferences : NSObject
@property (nonatomic, copy) NSString * _Nonnull bundleGroup;
@property (nonatomic, copy) NSString * _Nonnull selfUrlToOpen;
@property (nonatomic, copy) NSString * _Nonnull variableToStoreDeviceID;
@property (nonatomic) NSInteger maxAttempsToPay;
@property (nonatomic) BOOL shouldShowSendKeyboard;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull notAllowedHosts;
+ (SKEPreferences * _Nullable)getCurrentPreferences SWIFT_WARN_UNUSED_RESULT;
- (BOOL)setAsCurrrentPreferences SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK10SKEStrings")
@interface SKEStrings : NSObject
+ (NSString * _Nonnull)SKENoInternetConexion SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENoAccess SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKELoading SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEOpenApp SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEOpenSettings SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENotDeviceID SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENoBalanceCard SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENoPin SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENotAllowedHost SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEUserNotLoaded SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKETitleError SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEMaximumAmount SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEMinimumAmount SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEBtnContinueSend SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEBtnSend SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENoValidPIN SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEExceedMaxPINAttemps SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEHadSendYou SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEHadSendYouWA SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKESendTitle SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEPaymentErrorTitle SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEAuthorizePaymentTouchID SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENoTransacctions SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEErrorGettingTransacctions SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKEAuthenticationError SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKENextKeyboard SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)SKESuccesfullCanceled SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK7SKEUser")
@interface SKEUser : NSObject
- (void)showPayment;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK6SendUI")
@interface SendUI : UIView
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblAmount;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblFee;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblCard;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnCard;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnSend;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnBack;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activity;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewCard;
- (IBAction)backToAmountUI:(id _Nonnull)sender;
- (IBAction)changeCard:(id _Nonnull)sender;
- (IBAction)sendPayment:(id _Nonnull)sender;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK7Swapkey")
@interface Swapkey : NSObject
/// Llamar al inicializar el SDK
/// Esta función debe llamarse antes de realizar cualquier otra funcionalidad
/// <ul>
///   <li>
///     Return: Exito al inicial el sdk
///   </li>
/// </ul>
/// \param key Llave otorgada por Swap para realizar la integración
///
+ (BOOL)initializeWithKey:(NSString * _Nonnull)key isDevelopment:(BOOL)isDev andPreferences:(SKEPreferences * _Nonnull)pref SWIFT_WARN_UNUSED_RESULT;
/// Llamar para obtener en consola algunos insight
+ (BOOL)enableDebugging SWIFT_WARN_UNUSED_RESULT;
/// Setea las preferencias del SDK
/// Está función debe llamarse después de inicializar el SDK con la función initialize
/// <ul>
///   <li>
///     Return: True o false, si pudo setear las preferencias
///   </li>
/// </ul>
/// \param key Objeto de tipo SKEPreferences
///
+ (BOOL)setPreferences:(SKEPreferences * _Nonnull)pref SWIFT_WARN_UNUSED_RESULT;
/// Valida que ya tenga las preferencias del SDK
/// Puede llamarse en cualquier momento
/// <ul>
///   <li>
///     Parameter:
///   </li>
///   <li>
///     Return: True or False
///   </li>
/// </ul>
+ (BOOL)validatePreferences SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIInputViewController;
@protocol UITextInput;
@class NSBundle;

SWIFT_CLASS("_TtC19SwapkeyExtensionSDK17SwapkeyController")
@interface SwapkeyController : UIViewController
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified nextKeyboardButton;
@property (nonatomic, strong) UIInputViewController * _Null_unspecified handler;
- (void)nextKeyboard;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)textDidChange:(id <UITextInput> _Nullable)textInput;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithHandler:(UIInputViewController * _Nonnull)hdl OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC19SwapkeyExtensionSDK13TransactionUI")
@interface TransactionUI : UIView
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewStripeStatus;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblAmount;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblStatus;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblRecipient;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblDate;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewCancel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewForward;
- (IBAction)cancelPayment:(id _Nonnull)sender;
- (IBAction)forwardLink:(id _Nonnull)sender;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end










SWIFT_CLASS("_TtC19SwapkeyExtensionSDK13ValidateNipUI")
@interface ValidateNipUI : UIView
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblNip;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewPad;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified viewLoading;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activity;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblMessage;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblGeneralTitle;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnBack;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnDelete;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn0;
- (IBAction)deleteNip:(id _Nonnull)sender;
- (IBAction)didTapNumber:(id _Nonnull)sender;
- (IBAction)goBack:(id _Nonnull)sender;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
