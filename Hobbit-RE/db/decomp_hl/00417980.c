
void __thiscall FUN_00417980(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_c;
  int local_8;
  
  if (param_2 != *(int *)(param_1 + 0x10)) {
    puVar1 = (undefined1 *)operator_new(param_2 * 0x58);
    local_8 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      local_c = 0;
      puVar3 = puVar1;
      do {
        iVar2 = *(int *)(param_1 + 0xc) + local_c;
        iVar4 = 0x20;
        puVar5 = puVar3;
        do {
          *puVar5 = puVar5[iVar2 - (int)puVar3];
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 *)(puVar3 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
        *(undefined4 *)(puVar3 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
        *(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
        *(undefined4 *)(puVar3 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
        *(undefined4 *)(puVar3 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(puVar3 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(puVar3 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
        *(undefined4 *)(puVar3 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
        *(undefined4 *)(puVar3 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
        *(undefined4 *)(puVar3 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
        *(undefined4 *)(puVar3 + 0x48) = *(undefined4 *)(iVar2 + 0x48);
        *(undefined4 *)(puVar3 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
        *(undefined4 *)(puVar3 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
        *(undefined4 *)(puVar3 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
        local_8 = local_8 + 1;
        local_c = local_c + 0x58;
        puVar3 = puVar3 + 0x58;
      } while (local_8 < *(int *)(param_1 + 8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xc));
    *(undefined1 **)(param_1 + 0xc) = puVar1;
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}

