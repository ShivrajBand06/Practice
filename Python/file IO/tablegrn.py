for i in range(2,21):
    with open(f"tables/Multilication_table_of_{i}",'w') as m:
        for j in range(1,11):
            m.write(f"{i}X{j}={i*j}\n")      