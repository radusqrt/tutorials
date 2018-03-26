# How to use Cassandra

## cqlsh

- start the server:
    ```bash
    ./$CASSANDRA_HOME/bin/cassandra
    ```
- start the CQL Shell:
    ```bash
    cqlsh
    ```

## Creating a Keyspace

A **keyspace** is a namespace that defines **data replication** on nodes. A cluster contains one keyspace per node.

```sql
CREATE KEYSPACE <identifier> WITH <properties>
```

Properties:
- replication:
    - strategy:
        - **Simple Strategy**: simple replication factor
        - **Network Topology Strategy**: set the replication factor for each data center independently
        - **Old Network Topology Strategy**: legacy replication strategy
- durable_writes
    - default: **true**


```sql
CREATE KEYSPACE “KeySpace Name”
WITH replication = {'class': ‘Strategy name’, 'replication_factor' : ‘No. of replicas’};

CREATE KEYSPACE “KeySpace Name”
WITH replication = {'class': ‘Strategy name’, 'replication_factor' : ‘No.Of  replicas’}
AND durable_writes = ‘Boolean value’;
```

### Strategy example

```sql
CREATE KEYSPACE tutorialspoint
WITH replication = {'class':'SimpleStrategy', 'replication_factor' : 3};
```

Check if the KEYSPACE was successfully created:
```sql
DESCRIBE keyspaces;
```

## Using a Keyspace

```sql
USE <identifier>
```

### Example

```sql
USE tutorialspoint;
```

## Altering and deleting a Keyspace

```sql
DROP KEYSPACE <identifier>
```

```sql
ALTER KEYSPACE <identifier> WITH <properties>
```

## Creating a table

```sql
CREATE (TABLE | COLUMNFAMILY) <tablename>
('<column-definition>', '<column-definition>')
(WITH <option> AND <option>)
```

```sql
CREATE TABLE emp(
   emp_id int PRIMARY KEY,
   emp_name text,
   emp_city text,
   emp_sal varint,
   emp_phone varint
   );
```

## Batch instructions

```sql
BEGIN BATCH
<insert-stmt>/ <update-stmt>/ <delete-stmt>
APPLY BATCH
```

```sql
BEGIN BATCH
INSERT INTO emp (emp_id, emp_city, emp_name, emp_phone, emp_sal) values(  4,'Pune','rajeev',9848022331, 30000);
UPDATE emp SET emp_sal = 50000 WHERE emp_id =3;
DELETE emp_city FROM emp WHERE emp_id = 2;
APPLY BATCH;
```