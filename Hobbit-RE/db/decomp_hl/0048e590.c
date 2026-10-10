
void __thiscall FUN_0048e590(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  puVar3 = param_1 + 2;
  iVar1 = 8 - (int)puVar3;
  iVar2 = 0x200;
  do {
    *(undefined1 *)puVar3 = *(undefined1 *)((int)puVar3 + (int)param_2 + iVar1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = param_2[0x83];
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x86] = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  *(undefined1 *)((int)param_1 + 0x223) = *(undefined1 *)((int)param_2 + 0x223);
  *(undefined1 *)((int)param_1 + 0x222) = *(undefined1 *)((int)param_2 + 0x222);
  *(undefined1 *)((int)param_1 + 0x221) = *(undefined1 *)((int)param_2 + 0x221);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = param_2[0x93];
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = param_2[0x95];
  return;
}

