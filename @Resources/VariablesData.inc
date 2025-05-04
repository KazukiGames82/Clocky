[Variables]

Widget.Width=500

; ---------------------------------------- ;

HideText.Welcome=0

; ---------------------------------------- ;

HourFormat0=%I:%M %p
HourFormat1=%H:%M

DateFormat=0

DateFormat0=%d %B %Y
DateFormat1=%B %d %Y
DateFormat2=%Y %B %d
DateFormat4=%Y %d %B

; ---------------------------------------- ;

Weather.Phrase=Rain
Weather.Temp=17
Weather.Wind.Speed=8
Weather.Wind.Dir=SE
Weather.Humidity=93

Weather.Units.C=m
Weather.Units.F=e

APIKey=71f92ea9dd2f4790b92ea9dd2f779061

; ---------------------------------------- ;

Background.W=((#Widget.Width#*[#*Scale*])-(#Widget.Width#*[#*Scale*])%1)
Background.H=((86*[#*Scale*])-(86*[#*Scale*])%1)
Background.Line.W=((5*[#*Scale*])-(5*[#*Scale*])%1)
Background.Color=#Color.Background#
