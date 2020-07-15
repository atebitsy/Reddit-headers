//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsGoldPurchase : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _typeIsSet;
    _Bool _number_monthsIsSet;
    _Bool _one_time_typeIsSet;
    _Bool _gift_user_idIsSet;
    _Bool _gift_anonymous;
    _Bool _gift_anonymousIsSet;
    _Bool _gift_message;
    _Bool _gift_messageIsSet;
    _Bool _gift_message_lengthIsSet;
    _Bool _number_credditsIsSet;
    _Bool _subscription_typeIsSet;
    _Bool _gilded_content;
    _Bool _gilded_contentIsSet;
    _Bool _sourceIsSet;
    _Bool _number_coinsIsSet;
    _Bool _number_coins_monthlyIsSet;
    _Bool _number_coins_bonusIsSet;
    _Bool _transaction_idIsSet;
    _Bool _content_typeIsSet;
    _Bool _default_optionIsSet;
    _Bool _default_anonymous;
    _Bool _default_anonymousIsSet;
    _Bool _purchased_coins;
    _Bool _purchased_coinsIsSet;
    _Bool _proxy_for_user_idIsSet;
    _Bool _award_idIsSet;
    _Bool _award_nameIsSet;
    _Bool _is_mod_award;
    _Bool _is_mod_awardIsSet;
    _Bool _available_award_idsIsSet;
    _Bool _number_coins_to_recipientIsSet;
    _Bool _number_coins_to_communityIsSet;
    _Bool _start_timestampIsSet;
    _Bool _end_timestampIsSet;
    _Bool _gift_public;
    _Bool _gift_publicIsSet;
    _Bool _number_free_coinsIsSet;
    _Bool _number_paid_coinsIsSet;
    _Bool _paid_coins_revenue_penniesIsSet;
    _Bool _coin_package_idIsSet;
    _Bool _is_temporary_award;
    _Bool _is_temporary_awardIsSet;
    _Bool _is_sale_enabled;
    _Bool _is_sale_enabledIsSet;
    _Bool _coin_bonus_percentageIsSet;
    _Bool _coin_sale_percentageIsSet;
    _Bool _offer_contextIsSet;
    _Bool _offer_typeIsSet;
    _Bool _award_col_positionIsSet;
    _Bool _award_row_positionIsSet;
    _Bool _awarder_karma_earnedIsSet;
    _Bool _awardee_karma_earnedIsSet;
    _Bool _user_post_award_karmaIsSet;
    _Bool _user_comment_award_karmaIsSet;
    _Bool _target_user_post_karmaIsSet;
    _Bool _target_user_comment_karmaIsSet;
    _Bool _user_subreddit_post_karmaIsSet;
    _Bool _user_subreddit_comment_karmaIsSet;
    _Bool _award_affects_awardee_karma;
    _Bool _award_affects_awardee_karmaIsSet;
    _Bool _award_affects_awarder_karma;
    _Bool _award_affects_awarder_karmaIsSet;
    _Bool _filter_nameIsSet;
    _Bool _filter_idIsSet;
    _Bool _award_spotlight_statusIsSet;
    _Bool _coins_profile_idIsSet;
    int _number_months;
    int _gift_message_length;
    int _number_creddits;
    int _number_coins;
    int _number_coins_monthly;
    int _number_coins_bonus;
    int _number_coins_to_recipient;
    int _number_coins_to_community;
    int _number_free_coins;
    int _number_paid_coins;
    int _paid_coins_revenue_pennies;
    int _award_col_position;
    int _award_row_position;
    NSString *_type;
    NSString *_one_time_type;
    NSString *_gift_user_id;
    NSString *_subscription_type;
    NSString *_source;
    NSString *_transaction_id;
    NSString *_content_type;
    NSString *_default_option;
    NSString *_proxy_for_user_id;
    NSString *_award_id;
    NSString *_award_name;
    NSMutableArray *_available_award_ids;
    long long _start_timestamp;
    long long _end_timestamp;
    NSString *_coin_package_id;
    double _coin_bonus_percentage;
    double _coin_sale_percentage;
    NSString *_offer_context;
    NSString *_offer_type;
    long long _awarder_karma_earned;
    long long _awardee_karma_earned;
    long long _user_post_award_karma;
    long long _user_comment_award_karma;
    long long _target_user_post_karma;
    long long _target_user_comment_karma;
    long long _user_subreddit_post_karma;
    long long _user_subreddit_comment_karma;
    NSString *_filter_name;
    NSString *_filter_id;
    NSString *_award_spotlight_status;
    NSString *_coins_profile_id;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool coins_profile_idIsSet; // @synthesize coins_profile_idIsSet=_coins_profile_idIsSet;
@property(copy, nonatomic) NSString *coins_profile_id; // @synthesize coins_profile_id=_coins_profile_id;
@property(nonatomic) _Bool award_spotlight_statusIsSet; // @synthesize award_spotlight_statusIsSet=_award_spotlight_statusIsSet;
@property(copy, nonatomic) NSString *award_spotlight_status; // @synthesize award_spotlight_status=_award_spotlight_status;
@property(nonatomic) _Bool filter_idIsSet; // @synthesize filter_idIsSet=_filter_idIsSet;
@property(copy, nonatomic) NSString *filter_id; // @synthesize filter_id=_filter_id;
@property(nonatomic) _Bool filter_nameIsSet; // @synthesize filter_nameIsSet=_filter_nameIsSet;
@property(copy, nonatomic) NSString *filter_name; // @synthesize filter_name=_filter_name;
@property(nonatomic) _Bool award_affects_awarder_karmaIsSet; // @synthesize award_affects_awarder_karmaIsSet=_award_affects_awarder_karmaIsSet;
@property(nonatomic) _Bool award_affects_awarder_karma; // @synthesize award_affects_awarder_karma=_award_affects_awarder_karma;
@property(nonatomic) _Bool award_affects_awardee_karmaIsSet; // @synthesize award_affects_awardee_karmaIsSet=_award_affects_awardee_karmaIsSet;
@property(nonatomic) _Bool award_affects_awardee_karma; // @synthesize award_affects_awardee_karma=_award_affects_awardee_karma;
@property(nonatomic) _Bool user_subreddit_comment_karmaIsSet; // @synthesize user_subreddit_comment_karmaIsSet=_user_subreddit_comment_karmaIsSet;
@property(nonatomic) long long user_subreddit_comment_karma; // @synthesize user_subreddit_comment_karma=_user_subreddit_comment_karma;
@property(nonatomic) _Bool user_subreddit_post_karmaIsSet; // @synthesize user_subreddit_post_karmaIsSet=_user_subreddit_post_karmaIsSet;
@property(nonatomic) long long user_subreddit_post_karma; // @synthesize user_subreddit_post_karma=_user_subreddit_post_karma;
@property(nonatomic) _Bool target_user_comment_karmaIsSet; // @synthesize target_user_comment_karmaIsSet=_target_user_comment_karmaIsSet;
@property(nonatomic) long long target_user_comment_karma; // @synthesize target_user_comment_karma=_target_user_comment_karma;
@property(nonatomic) _Bool target_user_post_karmaIsSet; // @synthesize target_user_post_karmaIsSet=_target_user_post_karmaIsSet;
@property(nonatomic) long long target_user_post_karma; // @synthesize target_user_post_karma=_target_user_post_karma;
@property(nonatomic) _Bool user_comment_award_karmaIsSet; // @synthesize user_comment_award_karmaIsSet=_user_comment_award_karmaIsSet;
@property(nonatomic) long long user_comment_award_karma; // @synthesize user_comment_award_karma=_user_comment_award_karma;
@property(nonatomic) _Bool user_post_award_karmaIsSet; // @synthesize user_post_award_karmaIsSet=_user_post_award_karmaIsSet;
@property(nonatomic) long long user_post_award_karma; // @synthesize user_post_award_karma=_user_post_award_karma;
@property(nonatomic) _Bool awardee_karma_earnedIsSet; // @synthesize awardee_karma_earnedIsSet=_awardee_karma_earnedIsSet;
@property(nonatomic) long long awardee_karma_earned; // @synthesize awardee_karma_earned=_awardee_karma_earned;
@property(nonatomic) _Bool awarder_karma_earnedIsSet; // @synthesize awarder_karma_earnedIsSet=_awarder_karma_earnedIsSet;
@property(nonatomic) long long awarder_karma_earned; // @synthesize awarder_karma_earned=_awarder_karma_earned;
@property(nonatomic) _Bool award_row_positionIsSet; // @synthesize award_row_positionIsSet=_award_row_positionIsSet;
@property(nonatomic) int award_row_position; // @synthesize award_row_position=_award_row_position;
@property(nonatomic) _Bool award_col_positionIsSet; // @synthesize award_col_positionIsSet=_award_col_positionIsSet;
@property(nonatomic) int award_col_position; // @synthesize award_col_position=_award_col_position;
@property(nonatomic) _Bool offer_typeIsSet; // @synthesize offer_typeIsSet=_offer_typeIsSet;
@property(copy, nonatomic) NSString *offer_type; // @synthesize offer_type=_offer_type;
@property(nonatomic) _Bool offer_contextIsSet; // @synthesize offer_contextIsSet=_offer_contextIsSet;
@property(copy, nonatomic) NSString *offer_context; // @synthesize offer_context=_offer_context;
@property(nonatomic) _Bool coin_sale_percentageIsSet; // @synthesize coin_sale_percentageIsSet=_coin_sale_percentageIsSet;
@property(nonatomic) double coin_sale_percentage; // @synthesize coin_sale_percentage=_coin_sale_percentage;
@property(nonatomic) _Bool coin_bonus_percentageIsSet; // @synthesize coin_bonus_percentageIsSet=_coin_bonus_percentageIsSet;
@property(nonatomic) double coin_bonus_percentage; // @synthesize coin_bonus_percentage=_coin_bonus_percentage;
@property(nonatomic) _Bool is_sale_enabledIsSet; // @synthesize is_sale_enabledIsSet=_is_sale_enabledIsSet;
@property(nonatomic) _Bool is_sale_enabled; // @synthesize is_sale_enabled=_is_sale_enabled;
@property(nonatomic) _Bool is_temporary_awardIsSet; // @synthesize is_temporary_awardIsSet=_is_temporary_awardIsSet;
@property(nonatomic) _Bool is_temporary_award; // @synthesize is_temporary_award=_is_temporary_award;
@property(nonatomic) _Bool coin_package_idIsSet; // @synthesize coin_package_idIsSet=_coin_package_idIsSet;
@property(copy, nonatomic) NSString *coin_package_id; // @synthesize coin_package_id=_coin_package_id;
@property(nonatomic) _Bool paid_coins_revenue_penniesIsSet; // @synthesize paid_coins_revenue_penniesIsSet=_paid_coins_revenue_penniesIsSet;
@property(nonatomic) int paid_coins_revenue_pennies; // @synthesize paid_coins_revenue_pennies=_paid_coins_revenue_pennies;
@property(nonatomic) _Bool number_paid_coinsIsSet; // @synthesize number_paid_coinsIsSet=_number_paid_coinsIsSet;
@property(nonatomic) int number_paid_coins; // @synthesize number_paid_coins=_number_paid_coins;
@property(nonatomic) _Bool number_free_coinsIsSet; // @synthesize number_free_coinsIsSet=_number_free_coinsIsSet;
@property(nonatomic) int number_free_coins; // @synthesize number_free_coins=_number_free_coins;
@property(nonatomic) _Bool gift_publicIsSet; // @synthesize gift_publicIsSet=_gift_publicIsSet;
@property(nonatomic) _Bool gift_public; // @synthesize gift_public=_gift_public;
@property(nonatomic) _Bool end_timestampIsSet; // @synthesize end_timestampIsSet=_end_timestampIsSet;
@property(nonatomic) long long end_timestamp; // @synthesize end_timestamp=_end_timestamp;
@property(nonatomic) _Bool start_timestampIsSet; // @synthesize start_timestampIsSet=_start_timestampIsSet;
@property(nonatomic) long long start_timestamp; // @synthesize start_timestamp=_start_timestamp;
@property(nonatomic) _Bool number_coins_to_communityIsSet; // @synthesize number_coins_to_communityIsSet=_number_coins_to_communityIsSet;
@property(nonatomic) int number_coins_to_community; // @synthesize number_coins_to_community=_number_coins_to_community;
@property(nonatomic) _Bool number_coins_to_recipientIsSet; // @synthesize number_coins_to_recipientIsSet=_number_coins_to_recipientIsSet;
@property(nonatomic) int number_coins_to_recipient; // @synthesize number_coins_to_recipient=_number_coins_to_recipient;
@property(nonatomic) _Bool available_award_idsIsSet; // @synthesize available_award_idsIsSet=_available_award_idsIsSet;
@property(retain, nonatomic) NSMutableArray *available_award_ids; // @synthesize available_award_ids=_available_award_ids;
@property(nonatomic) _Bool is_mod_awardIsSet; // @synthesize is_mod_awardIsSet=_is_mod_awardIsSet;
@property(nonatomic) _Bool is_mod_award; // @synthesize is_mod_award=_is_mod_award;
@property(nonatomic) _Bool award_nameIsSet; // @synthesize award_nameIsSet=_award_nameIsSet;
@property(copy, nonatomic) NSString *award_name; // @synthesize award_name=_award_name;
@property(nonatomic) _Bool award_idIsSet; // @synthesize award_idIsSet=_award_idIsSet;
@property(copy, nonatomic) NSString *award_id; // @synthesize award_id=_award_id;
@property(nonatomic) _Bool proxy_for_user_idIsSet; // @synthesize proxy_for_user_idIsSet=_proxy_for_user_idIsSet;
@property(copy, nonatomic) NSString *proxy_for_user_id; // @synthesize proxy_for_user_id=_proxy_for_user_id;
@property(nonatomic) _Bool purchased_coinsIsSet; // @synthesize purchased_coinsIsSet=_purchased_coinsIsSet;
@property(nonatomic) _Bool purchased_coins; // @synthesize purchased_coins=_purchased_coins;
@property(nonatomic) _Bool default_anonymousIsSet; // @synthesize default_anonymousIsSet=_default_anonymousIsSet;
@property(nonatomic) _Bool default_anonymous; // @synthesize default_anonymous=_default_anonymous;
@property(nonatomic) _Bool default_optionIsSet; // @synthesize default_optionIsSet=_default_optionIsSet;
@property(copy, nonatomic) NSString *default_option; // @synthesize default_option=_default_option;
@property(nonatomic) _Bool content_typeIsSet; // @synthesize content_typeIsSet=_content_typeIsSet;
@property(copy, nonatomic) NSString *content_type; // @synthesize content_type=_content_type;
@property(nonatomic) _Bool transaction_idIsSet; // @synthesize transaction_idIsSet=_transaction_idIsSet;
@property(copy, nonatomic) NSString *transaction_id; // @synthesize transaction_id=_transaction_id;
@property(nonatomic) _Bool number_coins_bonusIsSet; // @synthesize number_coins_bonusIsSet=_number_coins_bonusIsSet;
@property(nonatomic) int number_coins_bonus; // @synthesize number_coins_bonus=_number_coins_bonus;
@property(nonatomic) _Bool number_coins_monthlyIsSet; // @synthesize number_coins_monthlyIsSet=_number_coins_monthlyIsSet;
@property(nonatomic) int number_coins_monthly; // @synthesize number_coins_monthly=_number_coins_monthly;
@property(nonatomic) _Bool number_coinsIsSet; // @synthesize number_coinsIsSet=_number_coinsIsSet;
@property(nonatomic) int number_coins; // @synthesize number_coins=_number_coins;
@property(nonatomic) _Bool sourceIsSet; // @synthesize sourceIsSet=_sourceIsSet;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool gilded_contentIsSet; // @synthesize gilded_contentIsSet=_gilded_contentIsSet;
@property(nonatomic) _Bool gilded_content; // @synthesize gilded_content=_gilded_content;
@property(nonatomic) _Bool subscription_typeIsSet; // @synthesize subscription_typeIsSet=_subscription_typeIsSet;
@property(copy, nonatomic) NSString *subscription_type; // @synthesize subscription_type=_subscription_type;
@property(nonatomic) _Bool number_credditsIsSet; // @synthesize number_credditsIsSet=_number_credditsIsSet;
@property(nonatomic) int number_creddits; // @synthesize number_creddits=_number_creddits;
@property(nonatomic) _Bool gift_message_lengthIsSet; // @synthesize gift_message_lengthIsSet=_gift_message_lengthIsSet;
@property(nonatomic) int gift_message_length; // @synthesize gift_message_length=_gift_message_length;
@property(nonatomic) _Bool gift_messageIsSet; // @synthesize gift_messageIsSet=_gift_messageIsSet;
@property(nonatomic) _Bool gift_message; // @synthesize gift_message=_gift_message;
@property(nonatomic) _Bool gift_anonymousIsSet; // @synthesize gift_anonymousIsSet=_gift_anonymousIsSet;
@property(nonatomic) _Bool gift_anonymous; // @synthesize gift_anonymous=_gift_anonymous;
@property(nonatomic) _Bool gift_user_idIsSet; // @synthesize gift_user_idIsSet=_gift_user_idIsSet;
@property(copy, nonatomic) NSString *gift_user_id; // @synthesize gift_user_id=_gift_user_id;
@property(nonatomic) _Bool one_time_typeIsSet; // @synthesize one_time_typeIsSet=_one_time_typeIsSet;
@property(copy, nonatomic) NSString *one_time_type; // @synthesize one_time_type=_one_time_type;
@property(nonatomic) _Bool number_monthsIsSet; // @synthesize number_monthsIsSet=_number_monthsIsSet;
@property(nonatomic) int number_months; // @synthesize number_months=_number_months;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetCoins_profile_id;
- (void)unsetAward_spotlight_status;
- (void)unsetFilter_id;
- (void)unsetFilter_name;
- (void)unsetAward_affects_awarder_karma;
- (void)unsetAward_affects_awardee_karma;
- (void)unsetUser_subreddit_comment_karma;
- (void)unsetUser_subreddit_post_karma;
- (void)unsetTarget_user_comment_karma;
- (void)unsetTarget_user_post_karma;
- (void)unsetUser_comment_award_karma;
- (void)unsetUser_post_award_karma;
- (void)unsetAwardee_karma_earned;
- (void)unsetAwarder_karma_earned;
- (void)unsetAward_row_position;
- (void)unsetAward_col_position;
- (void)unsetOffer_type;
- (void)unsetOffer_context;
- (void)unsetCoin_sale_percentage;
- (void)unsetCoin_bonus_percentage;
- (void)unsetIs_sale_enabled;
- (void)unsetIs_temporary_award;
- (void)unsetCoin_package_id;
- (void)unsetPaid_coins_revenue_pennies;
- (void)unsetNumber_paid_coins;
- (void)unsetNumber_free_coins;
- (void)unsetGift_public;
- (void)unsetEnd_timestamp;
- (void)unsetStart_timestamp;
- (void)unsetNumber_coins_to_community;
- (void)unsetNumber_coins_to_recipient;
- (void)unsetAvailable_award_ids;
- (void)unsetIs_mod_award;
- (void)unsetAward_name;
- (void)unsetAward_id;
- (void)unsetProxy_for_user_id;
- (void)unsetPurchased_coins;
- (void)unsetDefault_anonymous;
- (void)unsetDefault_option;
- (void)unsetContent_type;
- (void)unsetTransaction_id;
- (void)unsetNumber_coins_bonus;
- (void)unsetNumber_coins_monthly;
- (void)unsetNumber_coins;
- (void)unsetSource;
- (void)unsetGilded_content;
- (void)unsetSubscription_type;
- (void)unsetNumber_creddits;
- (void)unsetGift_message_length;
- (void)unsetGift_message;
- (void)unsetGift_anonymous;
- (void)unsetGift_user_id;
- (void)unsetOne_time_type;
- (void)unsetNumber_months;
- (void)unsetType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 number_months:(int)arg2 one_time_type:(id)arg3 gift_user_id:(id)arg4 gift_anonymous:(_Bool)arg5 gift_message:(_Bool)arg6 gift_message_length:(int)arg7 number_creddits:(int)arg8 subscription_type:(id)arg9 gilded_content:(_Bool)arg10 source:(id)arg11 number_coins:(int)arg12 number_coins_monthly:(int)arg13 number_coins_bonus:(int)arg14 transaction_id:(id)arg15 content_type:(id)arg16 default_option:(id)arg17 default_anonymous:(_Bool)arg18 purchased_coins:(_Bool)arg19 proxy_for_user_id:(id)arg20 award_id:(id)arg21 award_name:(id)arg22 is_mod_award:(_Bool)arg23 available_award_ids:(id)arg24 number_coins_to_recipient:(int)arg25 number_coins_to_community:(int)arg26 start_timestamp:(long long)arg27 end_timestamp:(long long)arg28 gift_public:(_Bool)arg29 number_free_coins:(int)arg30 number_paid_coins:(int)arg31 paid_coins_revenue_pennies:(int)arg32 coin_package_id:(id)arg33 is_temporary_award:(_Bool)arg34 is_sale_enabled:(_Bool)arg35 coin_bonus_percentage:(double)arg36 coin_sale_percentage:(double)arg37 offer_context:(id)arg38 offer_type:(id)arg39 award_col_position:(int)arg40 award_row_position:(int)arg41 awarder_karma_earned:(long long)arg42 awardee_karma_earned:(long long)arg43 user_post_award_karma:(long long)arg44 user_comment_award_karma:(long long)arg45 target_user_post_karma:(long long)arg46 target_user_comment_karma:(long long)arg47 user_subreddit_post_karma:(long long)arg48 user_subreddit_comment_karma:(long long)arg49 award_affects_awardee_karma:(_Bool)arg50 award_affects_awarder_karma:(_Bool)arg51 filter_name:(id)arg52 filter_id:(id)arg53 award_spotlight_status:(id)arg54 coins_profile_id:(id)arg55;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

