clear MyStruct MyFieldNames MyValues
MyStruct = test_c_results;
MyFieldNames = fieldnames(MyStruct);
for i=2:length(MyFieldNames)+1
    MyValues(rem(i,2)+1,fix(i/2)+1) = getfield(MyStruct,MyFieldNames{i-1});
end