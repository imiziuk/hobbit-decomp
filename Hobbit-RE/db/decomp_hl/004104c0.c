
void __fastcall FUN_004104c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  FUN_00648600(param_1 + 0x8c0,0,0x79);
  *(undefined1 *)(param_1 + 0x8c5) = 1;
  local_4 = 0x19;
  do {
    local_8 = 0;
    iVar5 = 0x49;
    puVar4 = (undefined4 *)(param_1 + 0x134);
    do {
      *puVar4 = 0;
      iVar6 = 0;
      do {
        iVar1 = FUN_0040f440(local_8,iVar6);
        if ((iVar1 != 0) &&
           (*(char *)(*(int *)(param_1 + (iVar6 + iVar5) * 4) + 0x8c0 + param_1) != '\0')) {
          *puVar4 = 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 10;
      puVar4 = puVar4 + 10;
    } while (iVar5 < 0x143);
    piVar2 = (int *)(param_1 + 0x134);
    iVar5 = 0;
    iVar6 = 0;
    do {
      if (*piVar2 != 0) {
        iVar1 = 0;
        do {
          iVar3 = FUN_0040f440(iVar5,iVar1);
          if (iVar3 != 0) {
            *(undefined1 *)(*(int *)(param_1 + 0x124 + (iVar1 + iVar6) * 4) + 0x8c0 + param_1) = 1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
      }
      piVar2 = piVar2 + 10;
      iVar6 = iVar6 + 10;
      iVar5 = iVar5 + 1;
    } while (iVar6 < 0xfa);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  puVar4 = (undefined4 *)(param_1 + 0x4f8);
  iVar5 = 0;
  do {
    FUN_0040f400(*puVar4,puVar4[1],*(undefined1 *)(param_1 + 0x8c0 + iVar5));
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar5 < 0x79);
  FUN_0040f3b0(0,*(undefined1 *)(param_1 + 0x8eb));
  FUN_0040f3b0(1,*(undefined1 *)(param_1 + 0x917));
  FUN_0040f3b0(2,*(undefined1 *)(param_1 + 0x935));
  FUN_0040f3b0(3,*(undefined1 *)(param_1 + 0x931));
  FUN_0040f3b0(4,*(undefined1 *)(param_1 + 0x90d));
  FUN_0040f3b0(5,*(undefined1 *)(param_1 + 0x8e1));
  return;
}

