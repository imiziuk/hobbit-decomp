
void FUN_0052f120(undefined4 *param_1,int param_2,int param_3)

{
  DWORD DVar1;
  HANDLE hFindFile;
  int iVar2;
  int iVar3;
  int *piVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  _WIN32_FIND_DATAA *p_Var8;
  int *piStack_1d8;
  undefined1 auStack_1d0 [44];
  LPCSTR apCStack_1a4 [22];
  _WIN32_FIND_DATAA _Stack_14c;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d855f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006499d0();
  local_4 = 0;
  DVar1 = GetFileAttributesA((LPCSTR)*param_1);
  if (DVar1 == 0xffffffff) {
    CreateDirectoryA((LPCSTR)*param_1,(LPSECURITY_ATTRIBUTES)0x0);
  }
  else {
    FUN_0064a4f0(apCStack_1a4,param_1,&DAT_00736e74);
    p_Var8 = &_Stack_14c;
    for (iVar6 = 0x50; iVar6 != 0; iVar6 = iVar6 + -1) {
      p_Var8->dwFileAttributes = 0;
      p_Var8 = (_WIN32_FIND_DATAA *)&p_Var8->ftCreationTime;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    hFindFile = FindFirstFileA(apCStack_1a4[0],&_Stack_14c);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        if ((((byte)_Stack_14c.dwFileAttributes & 0x12) == 0) &&
           ((iVar6 = 0, param_3 == 0 ||
            (iVar2 = FUN_00647f20(_Stack_14c.cFileName,param_3), iVar2 != 0)))) {
          FUN_00649b20(_Stack_14c.cFileName);
          iVar2 = *(int *)(param_2 + 8);
          local_4._0_1_ = 2;
          if (*(int *)(param_2 + 0x10) < iVar2 + 1) {
            if (*(int *)(param_2 + 0x18) == 0) {
              iVar3 = *(int *)(param_2 + 0x10) / 2;
              iVar7 = 1;
              if (0 < iVar3) {
                iVar7 = iVar3;
              }
              if (iVar7 + iVar2 < 1) {
                iVar2 = 1;
              }
              else {
                if (iVar3 < 1) {
                  iVar3 = 1;
                }
                iVar2 = iVar2 + iVar3;
              }
            }
            else {
              iVar2 = iVar2 + *(int *)(param_2 + 0x18);
            }
            piVar4 = (int *)operator_new(iVar2 * 0x2c + 4);
            local_4._0_1_ = 3;
            if (piVar4 == (int *)0x0) {
              piStack_1d8 = (int *)0x0;
            }
            else {
              piStack_1d8 = piVar4 + 1;
              *piVar4 = iVar2;
              FUN_006c043b(piStack_1d8,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
            }
            local_4._0_1_ = 2;
            if (0 < *(int *)(param_2 + 8)) {
              iVar7 = 0;
              do {
                FUN_0064a320(*(int *)(param_2 + 0xc) + iVar7);
                iVar6 = iVar6 + 1;
                iVar7 = iVar7 + 0x2c;
              } while (iVar6 < *(int *)(param_2 + 8));
            }
            iVar6 = *(int *)(param_2 + 0xc);
            if (iVar6 != 0) {
              FUN_006c026a(iVar6,0x2c,*(undefined4 *)(iVar6 + -4),FUN_00649ba0);
              FUN_006bf840(iVar6 + -4);
            }
            *(int **)(param_2 + 0xc) = piStack_1d8;
            *(int *)(param_2 + 0x10) = iVar2;
          }
          FUN_0064a320(auStack_1d0);
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_00649ba0();
        }
        BVar5 = FindNextFileA(hFindFile,&_Stack_14c);
      } while (BVar5 != 0);
      FindClose(hFindFile);
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649ba0();
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_c;
  return;
}

