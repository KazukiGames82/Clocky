[BasicStyle]
ClipString=1
Antialias=1
DynamicVariables=1
UpdateDivider=-1

[InfoStyle]
W=(#Background.W#-[#CURRENTSECTION#:X]*2)
FontSize=((14*#Scale#)-(14*#Scale#)%1)
StringCase = Upper
FontColor=#Color.Text#
FontWeight=600
InlineSetting=Weight | 600
Y=r

[TextStyle]
FontColor=#Color.SubText#
StringCase=None
FontSize=((11*#Scale#)-(11*#Scale#)%1)
X=((5*#Scale#)-(5*#Scale#)%1)
Y=((5*#Scale#)-(5*#Scale#)%1)R

[ShapeStyle]
Shape = Rectangle 0,0,0,0 | FillColor #Background.Color# | StrokeWidth 0
Shape3 = Combine Shape | Union Shape2
