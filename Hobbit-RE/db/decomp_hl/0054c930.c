
void __fastcall FUN_0054c930(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar1 = FUN_00587ce0();
  bVar5 = iVar1 % 0x3c == 0;
  FUN_0064f0d0(0,0x14,s___OBJECT_MANAGER___0073ce88);
  FUN_0064f0d0(0,0x15,s_Total_Num_Objects__1d_0073ce70,*(undefined4 *)(param_1 + 0x28d4));
  if (bVar5) {
    FUN_0064e7d0(s___OBJECT_MANAGER___0073ce5c);
    FUN_0064e7d0(s_Total_Num_Objects__1d_0073ce70,*(undefined4 *)(param_1 + 0x28d4));
  }
  piVar2 = &DAT_0076f908;
  piVar4 = (int *)(param_1 + 0x2014);
  iVar1 = 0x16;
  do {
    iVar3 = iVar1;
    if (*piVar2 != 0) {
      iVar3 = iVar1 + 1;
      FUN_0064f0d0(0,iVar1,s__3d__4_1f___3d__3d__3d___s_0073ce40,piVar4[-5],
                   (double)(float)piVar4[-3],piVar4[1] + *piVar4,piVar4[1],*piVar4,
                   *(undefined4 *)(*piVar2 + 4));
      if (bVar5) {
        FUN_0064e7d0(s__3d__4_1f___3d__3d__3d___s_0073ce24,piVar4[-5],(double)(float)piVar4[-3],
                     piVar4[1] + *piVar4,piVar4[1],*piVar4,*(undefined4 *)(*piVar2 + 4));
      }
    }
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 8;
    iVar1 = iVar3;
  } while ((int)piVar2 < 0x76fa20);
  return;
}

