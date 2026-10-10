
void __fastcall FUN_0050e510(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_8;
  int iStack_4;
  
  iVar2 = 0;
  iStack_8 = 0;
  iStack_4 = 0;
  if (0 < *(int *)(param_1 + 0x1f5c)) {
    iVar3 = 0x86;
    iVar4 = 0x1a0;
    do {
      if (*(int *)(param_1 + 0x1f60) <= iVar2) break;
      iVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x1f60) <= iVar2) break;
        switch(*(undefined4 *)(param_1 + (iVar5 + iVar4) * 4)) {
        case 0:
          uVar1 = 0x28;
          break;
        default:
          goto switchD_0050e56e_caseD_1;
        case 6:
          uVar1 = 0;
          break;
        case 7:
          uVar1 = 3;
          break;
        case 8:
          uVar1 = 6;
          break;
        case 9:
          uVar1 = 0xc;
          break;
        case 10:
          uVar1 = 0xf;
          break;
        case 0xb:
          uVar1 = 0x15;
          break;
        case 0xd:
          uVar1 = 0x12;
          break;
        case 0xe:
          uVar1 = 0x1a;
          break;
        case 0xf:
          uVar1 = 0x1d;
          break;
        case 0x10:
          uVar1 = 0x20;
          break;
        case 0x19:
          uVar1 = 0x2a;
        }
        FUN_0042b110(uVar1,*(undefined4 *)(param_1 + (iVar3 + iVar5) * 0xc));
        iVar2 = iStack_8;
switchD_0050e56e_caseD_1:
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 1;
        iStack_8 = iVar2;
      } while (iVar5 < 5);
      iStack_4 = iStack_4 + 1;
      iVar4 = iVar4 + 0x13b;
      iVar3 = iVar3 + 0x69;
    } while (iStack_4 < *(int *)(param_1 + 0x1f5c));
  }
  FUN_0042b070();
  FUN_00429100();
  return;
}

