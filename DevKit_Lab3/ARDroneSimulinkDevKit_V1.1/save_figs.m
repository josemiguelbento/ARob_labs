%% save figures
FolderName = './figures/';   % Your destination folder
FigList = findobj(allchild(0), 'flat', 'Type', 'figure');
for iFig = 1:length(FigList)
  FigHandle = FigList(iFig);
  %FigName   = get(FigHandle, 'Name');
  FigName = string(iFig);
  saveas(FigHandle, strcat(FolderName,'fig_' ,FigName, '.png'));
end

