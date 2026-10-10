
void __fastcall FUN_00572800(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 0x58);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iVar3 = piVar2[0xe];
    if (iVar3 != 0) {
      FUN_00572910();
      FUN_006bf840(iVar3);
    }
    FUN_00577200();
    piVar1 = *(int **)(param_1 + 0x58);
  }
  FUN_00576c70(local_4,**(undefined4 **)(param_1 + 0x58),*(undefined4 **)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar3 = *(int *)(param_1 + 0x70);
    if (iVar3 != 0) {
      FUN_006c026a(iVar3,0x2c,*(undefined4 *)(iVar3 + -4),FUN_00649ba0);
      FUN_006bf840(iVar3 + -4);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x94) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

