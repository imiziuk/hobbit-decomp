
/* WARNING: Removing unreachable block (ram,0x0067ba5f) */

void FUN_0067ba30(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined1 auStack_c [8];
  uint uStack_4;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  (**(code **)(*param_1 + 0x24))(param_1,&stack0xffffffcc);
  puVar5 = &stack0xffffffc8;
  puVar4 = &stack0xffffffcc;
  puVar3 = &stack0xffffffd0;
  (**(code **)(*param_1 + 0x2c))(param_1,unaff_retaddr,uStack_4,auStack_c,puVar3,puVar4,puVar5,0);
  puVar2 = puStack_2c;
  for (uVar1 = uStack_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *puStack_28;
    puStack_28 = puStack_28 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uStack_4 = uStack_4 & 3; uStack_4 != 0; uStack_4 = uStack_4 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puStack_28;
    puStack_28 = (undefined4 *)((int)puStack_28 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  (**(code **)(*param_1 + 0x4c))(param_1,puStack_2c,puVar5,puVar4,puVar3);
  return;
}

